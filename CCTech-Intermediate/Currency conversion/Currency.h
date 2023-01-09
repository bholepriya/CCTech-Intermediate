#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include<limits>
#include<cfloat>
#include<sstream>

using namespace std;

class Currency
{

public:
    ifstream inputFromFile;
    string currencyRate;
    vector<vector<float>> rateOfCurrency;
    int totalNumberOfCurrency;
    map<int, string> currencyNames;
    int inputCurrency;
    int outputCurrency;
    float inputAmount;
    float outputAmount;
    char choice;


    void storedRatingVectorsInVectors(vector<float> currencyrateColumn);
    void storedRatesInVectors();
    void readDataFromFile();
    void storedCurrencyName();
    void displayAllCurrencyName();
    void takeInputAmountFromUser();
    int  takeInputFromUser();
    bool isInputIsvalid(int inputCurrency);
    void currencyConvertor();
    bool isInputLetterIsvalid();
    void convertorCalculation();
    };

#endif