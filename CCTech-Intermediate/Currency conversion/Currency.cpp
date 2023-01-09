#include "Currency.h"

void Currency ::storedRatingVectorsInVectors(vector<float> currencyrateColumn)
{
    rateOfCurrency.push_back(currencyrateColumn);
}

void Currency ::storedCurrencyName()
{
    string line, currencyName;
    int count = 0;
    int sizeOfMap;
    getline(inputFromFile, line);
    istringstream iss(line);

    while (iss)
    {
        iss >> currencyName;
        currencyNames.insert(make_pair(count, currencyName));
        count++;
    }
    sizeOfMap = currencyNames.size();
    currencyNames.erase(sizeOfMap - 1);
    totalNumberOfCurrency = currencyNames.size();
}

void Currency ::storedRatesInVectors()
{
    inputFromFile >> currencyRate;
    vector<float> ratingOfColumn;
    int count = 0;
    while (!inputFromFile.eof())
    {
        inputFromFile >> currencyRate;
        if (isdigit(currencyRate[0]))
        {
            count++;
            ratingOfColumn.push_back(stof(currencyRate));
            if (count == totalNumberOfCurrency)
            {
                count = 0;
                storedRatingVectorsInVectors(ratingOfColumn);
                ratingOfColumn.clear();
            }
        }
    }
}

void Currency ::readDataFromFile()
{
    inputFromFile.open("CurrencyRate.txt", ios ::in);
    if (!inputFromFile)
    {
        cerr << "File Could not be open" << endl;
        exit(1);
    }
    storedCurrencyName();
    storedRatesInVectors();
    inputFromFile.close();
}

void Currency ::displayAllCurrencyName()
{
    for (auto &currencyName : currencyNames)
    {
        cout << currencyName.first + 1 << "  " << currencyName.second << endl;
    }
}

void Currency ::takeInputAmountFromUser()
{
    cin >> inputAmount;
    while (1)
    {
        if (inputAmount <= 0 || inputAmount > FLT_MAX)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "The amount entered is not valid, Please enter a valid amount" << endl;
            cin >> inputAmount;
        }
        else
          break;
    }
}

bool Currency ::isInputIsvalid(int inputCurrencyNumber)
{
    if (inputCurrencyNumber > 0 & inputCurrencyNumber <= totalNumberOfCurrency)
    {
        return true;
    }
    return false;
}

int Currency ::takeInputFromUser()
{
    int inputCurrencyNumber;
    cin >> inputCurrencyNumber;

    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input currency user input is not a number" << endl
                 << "Please enter a valid number" << endl;
            cin >> inputCurrencyNumber;
        }
        else
            break;
    }

    if (!isInputIsvalid(inputCurrencyNumber))
    {
        cout << "Input currency user input is a number outside the range" << endl
             << "The number is out of range" << endl
             << "please enter valid number" << endl;
        takeInputFromUser();
    }
    return inputCurrencyNumber;
}

void Currency ::convertorCalculation()
{
    float currencyRate = rateOfCurrency[inputCurrency][outputCurrency];
    outputAmount = currencyRate * inputAmount;
}

bool Currency ::isInputLetterIsvalid()
{
    cin >> choice;
    choice = toupper(choice);

    while (1)
    {
        if (choice != 'Y' & choice != 'N')
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << endl
                 << "Invalid Character" << endl;
            cout << "Please enter a valid character" << endl;
            cin >> choice;
            choice = toupper(choice);
        }
        else
        {
            return true;
            break;
        }
    }

    return true;
}

void Currency ::currencyConvertor()
{
    readDataFromFile();
    do
    {
        cout << "Welcome to CCTech Currency converter:" << endl
             << endl;
        cout << "Select the input currency from the list" << endl
             << endl;
        displayAllCurrencyName();
        inputCurrency = takeInputFromUser();

        cout << "Select the output currency from the list" << endl
             << endl;

        displayAllCurrencyName();
        outputCurrency = takeInputFromUser();

        cout << "Please enter the amount" << endl;
        takeInputAmountFromUser();

        convertorCalculation();

        cout << endl;

        cout << inputAmount << currencyNames[inputCurrency - 1] << " would be  " << outputAmount << currencyNames[outputCurrency - 1] << "  on 2023 - 01 - 06" << endl;

        cout << "Do you wish to continue with another conversion (Y/N)" << endl;
        isInputLetterIsvalid();

    } while (choice == 'Y');
}