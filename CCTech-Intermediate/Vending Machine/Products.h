#ifndef PRODUCTS_H
#define PRODUCTS_H


#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include "Coins.h"

using namespace std;


class ProductType
{ 
public:
    string name;
    float price;
   vector<ProductType> storedPriceOfAllProducts();
   ProductType()
   {

   }
   ProductType(string name,float price) : name(name),price(price){}

};

class Products
{
public:
    Coins dollers;
    ProductType product;
    float price;

    void equalinsertedAmount(ProductType product);
    void returnRemainingAmount(float, float);
    void insufficientAmount(ProductType product);
    bool isInsertedAmountValid(ProductType product);
    void displayAllProductsListWithPrice();
    void chooseTheProduct(vector<ProductType>);
    bool isDecreseTheCountOfitems(ProductType product);
    

};

extern vector<ProductType> storedPriceOfAllProducts();
extern void displayInformation(vector<ProductType> Products);
extern map<string,int> totalItems();

#endif