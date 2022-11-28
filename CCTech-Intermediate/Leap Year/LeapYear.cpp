#include <iostream>
#include <cassert>

using namespace std;

bool checkYearIsLeap(int year)
{
    if (year <= 0)
    {
        return false;
    }
    
    if (year % 400 == 0)
        return true;

    if (year % 100 == 0)
        return false;

    if (year % 4 == 0)
        return true;
    return false;
}


int main()
{
    assert(!checkYearIsLeap(0));
    assert(checkYearIsLeap(2000));
    assert(!checkYearIsLeap(100));
    assert(!checkYearIsLeap(2100));
    assert(checkYearIsLeap(2400));
    assert(!checkYearIsLeap(-2000));
   
    
    return 0;
}