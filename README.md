# C3DFile - lightweight access of motion capture data

This library was originally written by Martin Felis for the the inverse kinematics program puppeteer. It was never published seperatly and had some issues.

C3DFile is a simple library to access motion capture data that is stored
in C3D files. One can retrieve the marker position at individual frames and
also query values from the C3D header and also parameter values.

Oh, and it also comes with a wrapper for GNU Octave.

# Usage

For usage see either in the tests file at tests/c3dfiletests.cc or the
source code of the c3dexport utility at src/c3dexport.cc

# License

The library is published under the MIT license. Here is the full license
text:

    C3DFile
    Copyright (c) 2018 Felix Richter <judge@felixrichter.tech>
    
    Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files 
    (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, 
    publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do 
    so, subject to the following conditions:
    
    The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE 
    FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION 
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
