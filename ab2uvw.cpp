// Automatically generated C++ file on Sun Dec 15 21:36:46 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD ab2uvw.cpp kernel32.lib

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
#undef u
#undef v
#undef w

extern "C" __declspec(dllexport) void ab2uvw(void **opaque, double t, union uData *data)
{
   double  a = data[0].d; // input
   double  b = data[1].d; // input
   double &u = data[2].d; // output
   double &v = data[3].d; // output
   double &w = data[4].d; // output

// Implement module evaluation code here:
    u = 0.8164965809 * a;
    v = 0.8164965809 * (- 0.5 * a + 0.8660254038 * b);
    w = 0.8164965809 * (- 0.5 * a - 0.8660254038 * b);
}
