#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[])
{
    char c;
   if(argc == 1)
   {
    while (1)
    {
        c = getchar();
        if (c == EOF)
        {
            break;
        }
        cout << c;
    }
   }
   else if(argc > 1)
   {
    char c;
     for(int i = 1; i < argc; i++)
     {
        FILE *fp = fopen(argv[i], "r");
        if(!fp)
        {
            cout << "cat" << argv[i] << " : No such file or directory ";
        }
        else{
            while (!feof(fp))
            {
               c = fgetc(fp);
               cout << c;
            }
        }
        cout << endl;
     }
   }
}