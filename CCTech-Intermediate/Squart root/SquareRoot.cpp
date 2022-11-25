#include <iostream>
#include <cmath>
#include<cstring>
#include<string>

using namespace std;


double findSquartRoot(double (number))
{
    double result;
    if((number) == 0)
    {
        throw runtime_error("Zero has not a square root ");
    }
    else if((number) < 0)
    {
        throw runtime_error("Cannot find the squart root of negative number.");
    }
    else{

         result = sqrt((number));
    }
    return result;
}

int main()
{
    try
    {
        string number;
        cout << "Enter the number : ";
        cin >> number;
        bool flag = false;
        // int l
        for (int i = 0; i < number.length(); i++)
        {
            if ((number[i] > 47 && number[i] < 58) || number[i] == '.' || number[i] == '-')
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            double num = stod(number);
            cout << " Squart root of " << number << " is : " << findSquartRoot(num);
        }
        else
        {
            throw runtime_error("Inavlid input");
        }
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }

}