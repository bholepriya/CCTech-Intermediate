#include<iostream>
#include <cassert>
#include<Climits>

using namespace std;

void validation(long long int first_number,long long int second_number) {
    if ((first_number > 4294967295 || first_number < INT_MIN) || (second_number > 4294967295 || second_number < INT_MIN)) {
        throw runtime_error("Math error: Input value out of range ");
    }
}

void sum(long long int number1, long long int number2) {
    if ((number1 >= 4294967295 && number2 > 0) || (number2 >= 4294967295 && number1 > 0))
    {
        unsigned int sum; //= 0;
        if ((number1 + number2) >= 4294967295)
        {
            throw runtime_error("sum out of range");
        }
        else
        {
            sum =  number1 + number2;
            cout << "\nsum : " << sum;
        }
        
    }
    else {
        cout << "\nsum : " << number1 + number2;
    }
}

void substract(long long int number1, long long int number2) {
    signed int diff;
    if ((number2 > 0 && number1 < -2147483648 + number2) || (number2 < 0 && number1 > -2147483648 + number2)) {
        throw runtime_error("Math error: Input value out of range 36");
    }
    else {
        diff = number1 - number2;
        if(diff >= INT_MIN)
        {
            cout << endl << "substraction : " << diff;
        }
        else{
            throw runtime_error("Math error : output is out of range");
        }
    }
    
}

void multiplication(long long int number1,long long int number2) {
   long long int mul = number1 * number2;
    if ((mul > 4294967295) || (mul < -2147483648))
    {
        throw runtime_error("Math error: Input value out of range");
    }
    else {
        cout << "\nMultiplication : " << number1 * number2;
    }
}

void division(long long int number1,long long int number2)
{
    if (number2 == 0)
    {
        throw runtime_error("Math error :- Denomenator must not be zero");
    }
    else {
        cout << "\nDivision is :- " << number1 / number2 << endl;;
    }


}

int main()
{
    char choice;
    

    try
    {
        do {
            long long int first_number, second_number;
            cout << "Print A for addition " << endl;
            cout << "Print S for substraction" << endl;
            cout << "Print M for multiplication" << endl;
            cout << "Print D for division " << endl;
            cout << "Print E for exit" << endl;

            cin >> choice;


            switch (choice) {

            case 'E':
            {
                exit(0);
                break;
            }

            case 'A':
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> first_number;
                cin >> second_number;
                validation(first_number, second_number);
                sum(first_number, second_number);
                break;
            }
            case 'S':
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> first_number >> second_number;
                validation(first_number, second_number);
                substract(first_number, second_number);
                break;
            }
            case 'M':
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> first_number >> second_number;
                validation(first_number, second_number);
                multiplication(first_number, second_number);
                break;
            }
            case 'D':
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> first_number >> second_number;
                validation(first_number, second_number);
                division(first_number, second_number);
                break;
            }
            }
        } while (choice != 'E');
    }



    catch (runtime_error& e) {
        cout << "Exception occurred" << endl << e.what();
    }
    return 0;
}