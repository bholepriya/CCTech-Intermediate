*********************  Test strategy     **************************

1)The task is to find the starting and ending indexes of file name without extensions.
2)write the code for test cases one by one.
3)How to remove that extensions.
4)There is 4 words i.e "tests", "test", "spec", or "step";
5)Write code for ignoring those words and returning range of the file name.
6)For that writing two function :-
  a)specificWordPresentAtStarting
  b)specificWordPresentAtEnd

7)The function For without any specific word :-
 a)positionOfFileWithoutSpecificWord.

8)The main function which calling all these function itself :- 
     findPositionsOfFile.

9)this findPositionsOfFile() is calling in main function.


*************************** Test cases         *********************

1)passing path as string  it will give pair of integer i.e. starting and ending index of the file name.
    
   "hiker.cpp" ==> [0, 5]

   "diamond.h" ==> [0, 8]

   "HikerTest.js"  ==> [0, 5]

   "Diamond_Spec.feature" => [0, 8]

   "fizz.buzz-tests.js" => [0, 10]

   "test/FizzBuzz_test.exs" => [6, 14]

   "src/test/Roman.spec.re" => [10, 16]
