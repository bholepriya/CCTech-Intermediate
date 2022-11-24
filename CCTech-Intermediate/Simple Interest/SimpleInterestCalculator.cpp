#include<iostream>
#include<cmath>

using namespace std;

class SICalculator
{
private:
    double rate;
    double principle;
    double time;
    double simpleInterest;

public:

    void setvalues(double principleAmount,double rate,double time)
    {
        this->principle = abs(principleAmount);
        this->rate = abs(rate);
        this->time = abs(time);

    }
    void calculateSimpleInterest()
    {
        if(principle == 0 || rate == 0 || time == 0)
        {
            cout << endl << "Simple Interest is := 0" << endl;
            cout << endl << "Principle amount is :- " << principle << endl;
        }
        else
        {
        simpleInterest = (principle * rate * time)/100;
        cout << endl << "Simple Interest is :- " << simpleInterest << endl;
        cout << endl << "Principle amount is :- " << principle << endl;
        cout << endl << "Total amount is :- " << simpleInterest + principle << endl;
        }

    }

};


int main()
{
    cout << endl << "******************************** Simple Interest calculator **************************" << endl;
    double principleAmount, rate, time;
    SICalculator si;
    cout << "Enter the principle amount :- " ;
        cin >> principleAmount;
        cout << endl << "Enter rate of interest in percentage :- ";
        cin >> rate;
        cout << endl << "Enter time in year ";
        cin >> time;
    si.setvalues(principleAmount, rate, time);
    si.calculateSimpleInterest();
}