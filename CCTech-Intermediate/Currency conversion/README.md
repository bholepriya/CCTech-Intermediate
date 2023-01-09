## Statement of mini project
    => To make a "Currnecy convertor" for one given date.
    => The conversion rates should be consumed from a text file.
    => Currency conversion is expected for these currencies => USD, GBP, INR, EUR, CHF, AUD, SGD, CNY, JPY
    => Error handling should be consider.

## Flow of the Program 
    Take a text file with the rates of all currencies for a particular date, on which we have to convert the currencies.
    The text file should be in proper formate like Currencyrate.txt.
    Created a class "Currency"
    Created some variables and functions in that as per requirement.
    The main function is present in CurrencyConvertor.cpp file.
    In that created a variable of Currency Class and call a function currencyConvertor.
    The function carries multiple functions.
1.  readDataFromFile()
    => this function is used to read data from file.

2. storedCurrencyName()
    => storedcurrencyName function is used to stored the names of all currencies from file.

3. storedRatesInVectors()
    => this function is used to stored the rates takes from file.

4. storedRatingVectorsInVectors()
    => this function is used to stored the vectors of rating of currencies in the "rateOfCurrency" vector.

5. displayAllCurrencyName()
   => This function is used to display all the currencies name .

6. takeInputFromUser()
  => This function is used for taking input from the user.

7. isInputIsvalid()
  => This function is used for checking the input is valid or not.

8. takeInputAmountFromUser()
  => This function is used to take input amount from user and check it is valid or not.

9. convertorCalculation()
  => This function is used to convert the currency.

10. isInputLetterIsvalid()
    => This function is used to check the input letter is valid or not.

 ** If we want to add another currency in this program for conversion so just add that currency into the text file with rating.
    There is no need to change anything in program.

