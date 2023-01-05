#include "Products.h"

map<string, int> totalItems()
{
    map<string, int> totalItems;
    totalItems.insert(make_pair("cola", 10));
    totalItems.insert(make_pair("chips", 15));
    totalItems.insert(make_pair("candy", 0));
    return totalItems;
}

bool Products ::isDecreseTheCountOfitems(ProductType& product)
{
    map<string, int> itemsCount = totalItems();
    for (auto &items : itemsCount)
    {
        if (items.first == product.name && (items.second > 0))
        {
            itemsCount[product.name]--;
            return true;
        }
    }
    return false;
}

void Products :: equalinsertedAmount(ProductType& product)
{
     cout << "Thank you" << endl
                 << " Visit Again !!!!!!!!!!!!!!!!!!!" << endl
                 << endl;
            dollers.totalInsertedAmount = 0.0;
            dollers.amount.clear();
            displayInformation(product.storedPriceOfAllProducts());
            dollers.insertDoller();
            displayAllProductsListWithPrice();
}

void Products ::returnRemainingAmount(float& totalAmount, float& priceOfProduct)
{
        float remainingAmount = totalAmount - priceOfProduct;
        cout << "Collect Your Remaining Amount " << remainingAmount << endl;
         cout << "Thank you" << endl
                 << "Visit Again !!!!!!!!!!!!!!!!!!!" << endl
                 << endl;
        dollers.totalInsertedAmount = 0.0;
        dollers.amount.clear();
        displayInformation(product.storedPriceOfAllProducts());
        dollers.insertDoller();
        displayAllProductsListWithPrice();
}

void Products ::insufficientAmount(ProductType& product)
{
    cout << " Inserted Amount is Insufficient" << endl;
    cout << "Price of " << product.name << " is " << product.price << endl;
    dollers.insertDoller();
    isInsertedAmountValid(product);
}

void displayInformation(vector<ProductType> products)
{
    cout << endl;
    for (auto &product : products)
    {
        cout << product.name << " ==> " << product.price << endl;
    }
    cout << endl
         << "---------------------------------------------------------------------------" << endl
         << endl;
}

bool Products ::isInsertedAmountValid(ProductType& product)
{
    if (dollers.totalInsertedAmount == product.price && isDecreseTheCountOfitems(product))
    {
           equalinsertedAmount(product);
    }
    else if (dollers.totalInsertedAmount > product.price && isDecreseTheCountOfitems(product))
    {
        returnRemainingAmount(dollers.totalInsertedAmount, product.price);
    }
    else if (dollers.totalInsertedAmount < product.price && isDecreseTheCountOfitems(product))
    {
        insufficientAmount(product);
    }
    else{
        cout << "SOLD OUT please choose another product " << endl;
         dollers.insertDoller();
         displayAllProductsListWithPrice();

    }

}

vector<ProductType> ProductType ::storedPriceOfAllProducts()
{
    vector<ProductType> products;
    products.push_back(ProductType("cola", 1.0));
    products.push_back(ProductType("chips", 0.50));
    products.push_back(ProductType("candy", 0.65));
    return products;
}

void Products ::displayAllProductsListWithPrice()
{
    vector<ProductType> products = product.storedPriceOfAllProducts();
    displayInformation(products);
    chooseTheProduct(products);
}

void Products ::chooseTheProduct(vector<ProductType>& products)
{
    cout << "Choose Product" << endl;
    string productName;
    cin >> productName;

    transform(productName.begin(), productName.end(), productName.begin(), ::tolower);

    for (auto &product : products)
    {
        if (product.name == productName)
        {
            isInsertedAmountValid(product);
        }
    }
}