#include "Products.h"
#include<algorithm>

bool Coins::isValidCoin(char doller)
{
    vector<char> dollerTypes = {'*', '^', '&'};

    auto it = std::find(dollerTypes.begin(), dollerTypes.end(), doller);

    if(it != dollerTypes.end())
        return true;

        return false;
}

void Coins::totalInsertedAmountOfProduct(map<char,int>& totalCoins)
{
  float totalAmount = 0;
  map<char, int>::iterator doller;
    for(doller = totalCoins.begin() ;  doller != totalCoins.end(); ++doller)
    {
        if(doller->first == '*')
        {
            totalAmount = totalAmount + (doller->second * coin.nickels);
        }
        else if(doller->first  == '^')
        {
            totalAmount = totalAmount + (doller->second * coin.dimes);
       }
        else if(doller->first  == '&')
        {
            totalAmount = totalAmount + (doller->second * coin.quaters);
        }
    }
    totalInsertedAmount = totalAmount;
}

void Coins::insertDoller()
{
  
  cout << "INSERT COIN" << endl;
  cout << "Enter * for nickel" << endl;
  cout << "Enter ^ for dimes" << endl;
  cout << "Enter & for quaters" << endl;
  char doller;
  char choice;
  int value;

  do
  {
   cin >> doller;
   if(isValidCoin(doller))
   {
     if(amount.find(doller) == amount.end())
     {
        value = 0;
        value++;
        amount.insert(make_pair(doller,value));
     }
     else{
       amount[doller]++;
     }
   }
   else{
    cout << "INSERT VALID COIN" << endl; 
   }
   cout << "Do you want to insert more coins" << endl << "Press Y Otherwise N" << endl;
   cin >> choice;

  } while (choice != 'N');
  
   totalInsertedAmountOfProduct(amount);
}

