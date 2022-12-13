#include "Sort_String_By_Length.h"
#include "Sort_String_By_Length.cpp"

int main ()
{
    multimap<int, string> sortinglinesLength = sortStringByLength();
    printsAllLines(sortinglinesLength);

}