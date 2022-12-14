#pragma

#include <iostream>

using namespace std;

#ifndef verify
#define verify(condition)                                                                                                                                         \
    do                                                                                                                                                            \
    {                                                                                                                                                             \
        if (!(condition))                                                                                                                                         \
        {                                                                                                                                                         \
            cerr << __FILE__ << ": " << __LINE__ << " error: In function "                                                                                        \
            << __FUNCTION__ << ", verification of condition "                                                                                                     \
            << #condition << " failed." ;                                                                                                                                                                                                                                                                          \
        }                                                                                                                                                         \
    } while (0)
#endif