#include "Sort_String_By_Length.h"

 multimap<int, string> sortStringByLength()
{
   string line;
   multimap<int, string> sortLineByLength;

    while(getline(cin,line))
    {
        int length = line.length();
        sortLineByLength.insert({length,line});
        if(line == "1")
        {
            break;
        }
    }
    
    return sortLineByLength;
}

void printsAllLines(multimap<int, string>& lines)
{
     multimap<int, string>::iterator itr;
        for (itr = lines.begin(); itr != lines.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
}