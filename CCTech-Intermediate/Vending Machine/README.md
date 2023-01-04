 ## Problem statement

  1. To write a code for vending machine for 3 products cola, chips, and candy their prices are 1, 0.50 and 0.65 respectively.
  2. Only nickel, dimes and quaters are aplicable for buy any product. 
  3. if inserted coins are not valid than display INSERT VALID COINS.
  4. If customer paid enough money than display THANK YOU.
  5. if customer paid more money than the value of product then return remaining money.
  6. if customer paid less money than the value of product then ask to customer to inser money.
  7. if product are not in stock than display message SOLD OUT.
  
  ## Flow of program
  
   1. create two classes :-
      a. Coins
      b. Products
      c. ProductType
      d. CoinType

   2. Program start from main() which is present in Vendingmachine.cpp.
   3. Create a variable of product class and call the function insertDoller for inserting doller and call the function displayAllProductsListWithPrice() for display the list of product available in stock.
   4. In coin class isValidcoin() method check the inserted coin is valid or not.
   5. totalInsertedAmountOfProduct() this method calculate the total amount inserted by coustomer.
   6. The coinType class is for defining types of coins.
   7. ProductType class is defining for types of products are in stock.
      storedPriceOfAllProducts() 
        This function is used to stored the data of all products.

   8. In Products class 
        equalinsertedAmount(ProductType product)
            -- This function is call when Price inserted by customers and proce of the product are same.

        returnRemainingAmount(float, float)
           -- This function is called when customer inserted coins more than the price of the product.

        insufficientAmount(ProductType product)
           -- This function is called when insufficient coins are inserted by customer.

        isInsertedAmountValid(ProductType product)
          -- This function is called when inserted amount is valid or not.

        displayAllProductsListWithPrice();
            -- This function is called fro displaying the list of the product.

        chooseTheProduct(vector<ProductType>);
            -- This function is called for choosing the product for customer.

        isDecreseTheCountOfitems(ProductType product);
           -- This function is for decresing the value of the product after buying any product.
     
    This functions are defined in Products class.

  9. storedPriceOfAllProducts() 
       This function is for storing the price of all products.

     displayInformation(vector<ProductType> Products)
       This function is for displaying the information of all products.
    
    extern map<string,int> totalItems();
       This function is for storing the count of total products.
    
   ## Test cases for the program :-
   1. If inserted coins are not valid then display the message INVALId COIN.
   2. If no coins are inserted then display the message INSERT COIN and also display the list of the product.
   3. The inserted coins should be nickels, dime and quaters other coins are not accepted.
   4. If product is selected and enough money is inserted then machine displays THANK YOU.
   5. If there is not enough money inserted then the machine displays  price of the product and ask to cutomers to  INSERT COIN.
   6. If inserted coins are more than price of the product than return remaining coins to the coustomer and display the message COLLECT YOU AMOUNT.
   7. If items selected by customer is out of stock than display the message SOLD OUT please choose another product.