// Automatically generated C++ file on Sun Dec 15 21:47:55 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD ab2dq.cpp kernel32.lib

union uData
{
   bool b;
   char c;
   unsigned char uc;
   short s;
   unsigned short us;
   int i;
   unsigned int ui;
   float f;
   double d;
   long long int i64;
   unsigned long long int ui64;
   char *str;
   unsigned char *bytes;
};

// int DllMain() must exist and return 1 for a process to load the .DLL
// See https://docs.microsoft.com/en-us/windows/win32/dlls/dllmain for more information.
int __stdcall DllMain(void *module, unsigned int reason, void *reserved) { return 1; }

// #undef pin names lest they collide with names in any header file(s) you might include.
#undef a
#undef b
#undef d
#undef q
#undef theta

#include <cmath>

extern "C" __declspec(dllexport) void ab2dq(void **opaque, double t, union uData *data)
{
   double  a     = data[0].d; // input
   double  b     = data[1].d; // input
   double  theta = data[2].d; // input
   double &d     = data[3].d; // output
   double &q     = data[4].d; // output

// Implement module evaluation code here:
   d = a * std::cos(theta) + b * std::sin(theta);
   q = - a * std::sin(theta) + b * std::cos(theta);
}
