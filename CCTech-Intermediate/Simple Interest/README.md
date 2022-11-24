**************** Test Strategy ******************
1) Find how to calculate simple interest.
2) Formula for simple interest is :-
     SI = P * R * T;
     Total amount = SI + P;
     where :-
     SI = simple interest
     P = Principle
     R = Rate of interest
     T = time in year
3)write test cases.
4)Declared the SICalculator class  with private data members and public member function.
5)write setValues() for assigning the values in private data members, calculateSimpleInterest() for calculating simple interest.
5)Create an object of that class and call getValues() and call the calculateSimpleInterest() and excute program.


***************************       Test cases for simple interest         ************************************

1) when enter principle is zero, the simple interest will be zero 
Input :-
Enter the principle amount :- 0
Enter rate of interest in percentage :- 2.0
Enter time in year 0.6

output:-
Simple Interest is := 0
Principle amount is :- 0


2)When year is zero, the simple interest will be zero and principle will as it is
Input :-
Enter the principle amount :- 56000
Enter rate of interest in percentage :- 6
Enter time in year 0

output:-
Simple Interest is := 0
Principle amount is :- 56000

3)when rate is zero, the the simple interest will be zero and principle will as it is
Input :-
Enter the principle amount :- 36000
Enter rate of interest in percentage :- 0
Enter time in year 3

output:-
Simple Interest is := 0
Principle amount is :- 36000

4)When we give input in negative then it will convert it in positive and take as a positive values.
Input :-
Enter the principle amount :- -15000
Enter rate of interest in percentage :- -5.6
Enter time in year 4

output:-
Simple Interest is :- 3360
Principle amount is :- 15000
Total amount is :- 18360

5)For correct input the output will be :- 
Input :-
Enter the principle amount :- 45000
Enter rate of interest in percentage :- 6.5
Enter time in year 8

output:-
Simple Interest is :- 23400
Principle amount is :- 45000
Total amount is :- 68400