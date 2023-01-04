#ifndef COINS_H
#define COINS_H
#endif

#include <map>
#include <iostream>
#include <vector>

using namespace std;

class CoinTypes
{
public:
    const float nickels = 0.10;
    const float dimes = 0.05;
    const float quaters = 0.25;
};
class Coins
{
public:
    CoinTypes coin;
    float totalInsertedAmount;
    map<char,int> amount;
    

    bool isValidCoin(char doller);
    void totalInsertedAmountOfProduct(map<char, int> &totalCoins);
    void insertDoller();
};