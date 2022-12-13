#include "Sort_String_By_Length.h"

int main ()
{
    multimap<int, string> sortinglinesLength = sortStringByLength();
    printsAllLines(sortinglinesLength);

}