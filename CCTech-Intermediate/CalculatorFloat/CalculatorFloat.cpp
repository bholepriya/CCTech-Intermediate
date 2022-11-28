#include <iostream>
#include<float.h>
#include <Climits>
#include<iomanip>


using namespace std;

void checkValidation(double number1, double number2)
{
    if ((number1 > DBL_MAX || number1 < DBL_MIN) || (number2 > DBL_MAX || number2 < DBL_MIN))
    {
        throw runtime_error("Math error: Input value out of range ");
    }
}

void addition(double number1, double number2)
{
    if ((number1 >= DBL_MAX && number2 > 0) || (number2 >= DBL_MAX && number1 > 0))
    {
        double addition = 0;
        if ((addition = number1 + number2) >= DBL_MAX)
        {
            throw runtime_error("math error :addition out of range");
        }
        else
        {
            addition = number1 + number2;
            cout << "\nsum : " << addition;
        }
    }
    else
    {
        cout << "\nAddition: " << number1 + number2;
    }
}

void substraction(double number1, double number2)
{
    double diff;
    if ((number2 > 0 && number1 < DBL_MIN + number2) || (number2 < 0 && number1 < DBL_MIN + number2))
    {
        throw runtime_error("math error: Input value out of range ");
    }
    else
    {
        diff = number1 - number2;
    }
    cout << endl
        << "substraction : " << diff;
}

void multiplication(double number1, double number2)
{
    double mult = number1 * number2;
    if ((mult > DBL_MAX) || (mult < DBL_MIN))
    {
        throw runtime_error("math error: Input value out of range");
    }
    else
    {
        cout << "\nMultiplication : " << mult;
    }
}

void division(double number1, double number2)
{
    if (number2 == 0 || ((number1 == DBL_MIN) && (number2 == -1)))
    {
        throw runtime_error("math error: Denominator may not be zero");
    }
    else
    {
        cout << "\nDivision is :- " << number1 / number2 << endl;
        ;
    }
}

int main()
{
    char choice;

    try
    {
        do
        {
            double num1, num2;
            cout << endl
                << "Print A for addition " << endl;
            cout << "Print S for substraction" << endl;
            cout << "Print M for multiplication" << endl;
            cout << "Print D for division " << endl;
            cout << "Print E for exit" << endl;

            cin >> choice;

            switch (choice)
            {

            case 'E':
            {
                cout << endl;
                exit(0);
                break;
            }

            case 'A':
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> num1;
                cin >> num2;
                checkValidation(num1, num2);
                addition(num1, num2);
                break;
            }
            case 'S':
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> num1 >> num2;
                //checkValidation(num1, num2);
                substraction(num1, num2);
                break;
            }
            case 'M':
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> num1 >> num2;
                checkValidation(num1, num2);
                multiplication(num1, num2);
                break;
            }
            case 'D':
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> num1 >> num2;
                checkValidation(num1, num2);
                division(num1, num2);
                break;
            }
            }
        } while (choice != 'E');
    }

    catch (runtime_error& e)
    {
        cout << "Exception occurred" << endl
            << e.what();
    }
    return 0;
}