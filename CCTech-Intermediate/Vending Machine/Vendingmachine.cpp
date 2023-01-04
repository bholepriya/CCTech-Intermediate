#include "Products.h"

int main()
{
    Products product;
    displayInformation(product.product.storedPriceOfAllProducts());
    product.dollers.insertDoller();
    product.displayAllProductsListWithPrice();

    return EXIT_SUCCESS;
}