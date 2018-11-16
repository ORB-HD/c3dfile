#include "c3dfile.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[])
{
	const char* reference = "../data/slackline0000_all_written.c3d";
	const char* xsens_c3d = "../data/slackline0000_all.c3d";
	C3DFile c3dfile, reference_file;
	reference_file.load (reference);
	c3dfile.load (xsens_c3d);
	

	cout << "Value Name" << "\t\t" << "Original" << "\t" << "Reference" << endl;
	//compare header
	cout << "Header first" << "\t\t" << (int)c3dfile.header.first_parameter << "\t\t" << (int)reference_file.header.first_parameter << endl;
	cout << "Header id" << "\t\t" << (int)c3dfile.header.c3d_id<< "\t\t" << (int)reference_file.header.c3d_id<< endl;
	cout << "Header Num Mark" << "\t\t" << (int)c3dfile.header.num_markers<< "\t\t" << (int)reference_file.header.num_markers<< endl;
	cout << "Header Ana Chan" << "\t\t" << (int)c3dfile.header.analog_channels<< "\t\t" << (int)reference_file.header.analog_channels<< endl;
	cout << "Header 1. frame" << "\t\t" << (int)c3dfile.header.first_frame<< "\t\t" << (int)reference_file.header.first_frame<< endl;
	cout << "Header last frame" << "\t" << (int)c3dfile.header.last_frame<< "\t\t" << (int)reference_file.header.last_frame<< endl;
	cout << "Header max int gap" << "\t" << (int)c3dfile.header.max_interpolation_gap<< "\t\t" << (int)reference_file.header.max_interpolation_gap<< endl;
	cout << "Header scale_factor" << "\t" << (float)c3dfile.header.scale_factor<< "\t\t" << (float)reference_file.header.scale_factor<< endl;
	cout << "Header start rec" << "\t" << (int)c3dfile.header.start_record<< "\t\t" << (int)reference_file.header.start_record<< endl;
	cout << "Header ana cha sam" << "\t" << (int)c3dfile.header.analog_channels_samples<< "\t\t" << (int)reference_file.header.analog_channels_samples<< endl;
	cout << "Header vid sam ra" << "\t" << (float)c3dfile.header.video_sampling_rate<< "\t\t" << (float)reference_file.header.video_sampling_rate<< endl;
	cout << "Header key val la" << "\t" << (int)c3dfile.header.key_value_label<< "\t\t" << (int)reference_file.header.key_value_label<< endl;
	cout << "Header bl lab strt" << "\t" << (int)c3dfile.header.block_label_start<< "\t\t" << (int)reference_file.header.block_label_start<< endl;
	cout << "Header 4 events" << "\t\t" << (int)c3dfile.header.key_value_char_4_events<< "\t\t" << (int)reference_file.header.key_value_char_4_events<< endl;
	cout << "Header num evnt" << "\t\t" << (int)c3dfile.header.num_events<< "\t\t" << (int)reference_file.header.num_events<< endl;

	cout << endl << "Marker_name" << "\tLoaded Values" << "\tReference Values" << endl;

	for (auto marker_name : reference_file.point_label) {
		auto elem = find(c3dfile.point_label.begin(), c3dfile.point_label.end(), marker_name);
		Sint16 pi = reference_file.label_point_map[marker_name];
		auto reference_data = reference_file.float_point_data[pi];
		if( elem != c3dfile.point_label.end() ) {
			Sint16 cpi = c3dfile.label_point_map[marker_name];
			auto c3d_data = c3dfile.float_point_data[pi];
			cout << "------------------------------------------------------------------------------" << endl;
			cout << "\t\t"<< c3d_data.x[0] << "\t" << reference_data.x[0] << endl;
			cout << marker_name << "\t" << c3d_data.y[0] << "\t" << reference_data.y[0] << endl;
			cout << "\t\t"<< c3d_data.z[0] << "\t" << reference_data.z[0] << endl;
			cout << "------------------------------------------------------------------------------" << endl;
		} else {
			cout << "Dafug Happend "<< marker_name << endl;
		}
	}


	return 0;
}
