// Automatically generated C++ file on Sun Dec 15 21:16:29 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD uvw2ab.cpp kernel32.lib

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
#undef u
#undef v
#undef w
#undef a
#undef b

extern "C" __declspec(dllexport) void uvw2ab(void **opaque, double t, union uData *data)
{
   double  u = data[0].d; // input
   double  v = data[1].d; // input
   double  w = data[2].d; // input
   double &a = data[3].d; // output
   double &b = data[4].d; // output

// Implement module evaluation code here:
   a = 0.8164965809 * (u - 0.5 * v - 0.5 * w);
   b = 0.7071067812 * (v - w);
}
