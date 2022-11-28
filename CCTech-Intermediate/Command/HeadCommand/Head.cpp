#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "\n";
    }
    else if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            string line;
            vector<string> lines;
            int count = 0;

            ifstream infile(argv[i]);
            if (!infile)
            {
                cout << "Head: cannot read: " << argv[i] << " : No such file or directory ";
            }
            else
            {
                while (getline(infile, line))
                {
                    lines.push_back(line);
                }
            }
            if (lines.size() > 10)
            {
                cout << "==> " << argv[1] << " <==" << endl;
                for (int i = 0; i < 10; i++)
                {
                    cout << lines.at(i) << endl;
                }
            }
            else
            {
                cout << "==> " << argv[1] << " <==" << endl;
                for (int i = 0; i < lines.size(); i++)
                {
                    cout << lines.at(i) << endl;
                }
            }
        }
    }
}