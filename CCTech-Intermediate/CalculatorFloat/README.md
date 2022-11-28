

*******************************          Test Strategy           *************************************

1. Write a code for making a calculator for calculating addition, substraction, multiplication and division for floating values.
2. create a function for chaking range for the input.
3. user choose an option for addition, substraction, multiplication and division and creating functions with that for both signed and  
   unsigned values.
4. user gives two numbers as input.
5. Flow: User Enter the which operation want to done and then enter the two values.

Test Cases

1.If you choose operation A
 Enter 2147483648, 2147483648 
 Output: Failed Overflow! Because Addition is overflow addition

2.If you choose operation A
 Enter 4294967295, 2 
 Output: Exception occurred Overflow:Addition out of range

3.If you choose operation A
 Enter 4294967295, -2147483648
Output: Addition : 2147483647

4.If you choose operation B
 Enter 2147483648, -2147483647
Output: Subtraction : 4294967295

5.If you choose operation B
 Enter -1, 2147483648 
 Output: Exception occurred Subtraction out of range

6.If you choose operation C
  Enter 42949672956, -2 
  Output: Exception occurred Multiplication out of range

7.If you choose operation C
  Enter 46253, 65 
  Output: Multiplication : 3006445

8.7.If you choose operation D 
    Enter 25 -5 Output: Division : -5