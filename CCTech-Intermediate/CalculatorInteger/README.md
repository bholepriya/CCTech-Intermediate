
*******************************          Test Strategy           *************************************

1. Write a code for making a calculator for calculating addition, substraction, multiplication and division for Integer values.
2. create a function for chaking range for the input.
3. user choose an option for addition, substraction, multiplication and division and creating functions with that for both signed and  
   unsigned values.
4. user gives two numbers as input.
5. Flow: User Enter the which operation want to done and then enter the two values.

Test Cases

1.If you choose operation A
 Enter the two numbers :- 
 4294967295
 4294967296
 Exception occurred
 Math error: Input value out of range 

2.If you choose operation A
  Enter the two numbers :- 
  21474825
  236547
  sum : 21711372

3.If you choose operation A
  Enter the two numbers :- 
  -2147483649
  2147483649
  Exception occurred
  Math error: Input value out of range

4.If you choose operation B
  Enter the two numbers :- 
  2147483648
  -2147483647
 Output: Subtraction : 4294967295

5.If you choose operation B
 Enter the two numbers :- 
 -1
 2147483648 
 Output: Exception occurred Subtraction out of range

6.If you choose operation C
  Enter the two numbers :- 
  42949672956
  -2 
  Output: Exception occurred Multiplication out of range

7.If you choose operation C
  Enter the two numbers :- 
  46253
  65 
  Output: Multiplication : 3006445

8.7.If you choose operation D 
   Enter the two numbers :- 
   30
  -5
   Output: Division : -6