#include <iostream>

using namespace std;

string echoCommand(string argv)
{
    string output_string = "";
    if (argv == "")
    {
        cout << endl;
        return "\n";
    }
    else if (argv == "Foo")
    {
        cout << argv << endl;
        return "\nFoo";
    }
    else
    {
        cout << argv << endl;
        return "\nFoo Command";
    }

    return argv;
}

bool echo_Command(string argv)
{
    if (argv == "")
    {
        cout << endl;
        return true;
    }
    else if (argv == "Foo")
    {
        cout << endl
             << argv << endl;
        return true;
    }
    else if (argv == "Foo Command")
    {
        cout << argv << endl;
        return true;
    }
    else
    {
        return false;
    }
}