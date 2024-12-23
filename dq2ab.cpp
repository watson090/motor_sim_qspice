// Automatically generated C++ file on Mon Dec 16 22:02:14 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD dq2ab.cpp kernel32.lib

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
#undef d
#undef q
#undef a
#undef b
#undef theta

#include <cmath>

extern "C" __declspec(dllexport) void dq2ab(void **opaque, double t, union uData *data)
{
   double  d     = data[0].d; // input
   double  q     = data[1].d; // input
   double  theta = data[2].d; // input
   double &a     = data[3].d; // output
   double &b     = data[4].d; // output

// Implement module evaluation code here:
   a = d * std::cos(theta) - q * std::sin(theta);
   b = d * std::sin(theta) + q * std::cos(theta);
}
