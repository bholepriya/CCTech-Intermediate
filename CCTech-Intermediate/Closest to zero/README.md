*******************************    Test Strategy    *************************************

1) First Find the way hoe can we find the closest zero values in the given list of integer.
2) write the test cases for the program.
3) write the code for the test cases one by one until the test cases are passed.
4) I check the test cases are passes or not using assert() in cassert header file.
5) Write a function for finding the closest values in the integer list and passes that list as argument in that function.
6) findClosedElements() is used to find the closest number and it returns the closest number in string form.


*******************************     Test cases     ***************************************

1) If two numbers are equidisatance from 0 i.e one positive and one negative then returns positive number from that list.
  vec = { -1, -2, 0, 1, 6, 7 }; 
  The closest number is 1.

2) If the lsit is empty then it gives an message Empty,
  vec = {};

3) If list contained only 0 then its gives an message No closest Element.
  vec = { 0 };

4) If list is
 vec = { -1, 6 };
 then output is -1 6.

5) If only one element is present in list 
   vec = { 10 }
   then output is 10.

6) If two same negative values are present in the list 
   vec = { 9, 7, -5, -5, -5};
   then output is 7 -5.

7) If two same positive values are present in the list 
   vec = { 9, 9, 7, 8, 4 };
   then output is 4.

8) If all present elements are negative then 
vec = { -9, -7, -7, -8, -4 };
output is -4.