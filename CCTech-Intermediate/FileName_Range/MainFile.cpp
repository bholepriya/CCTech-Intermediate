#include<iostream>
#include <string>
#include<vector>
#include<cassert>
#include "RangeOfFile.h"

using namespace std;

int main()
{	
	string path1 = "src/Hiker_spec.re";
	pair<int, int> range7;
	range7.first = 4;
	range7.second = 9;
	assert(findPositionsOfFile(path1) == range7);

	string path2 = "wibble/test/hiker_spec.rb";
	pair<int, int> range1;
	range1.first = 12;
	range1.second = 17;
	assert(findPositionsOfFile(path2) == range1);

	string path3 = "tests_hiker.sh";
	pair<int, int> range2;
	range2.first = 6;
	range2.second = 11;
	assert(findPositionsOfFile(path3) == range2);

	string path4 = "DiamondTest.kt";
	pair<int, int> range3;
	range3.first = 0;
	range3.second = 7;
	assert(findPositionsOfFile(path4) == range3);

	string path5 = "fizzBuzz_test.d";
	pair<int, int> range4;
	range4.first = 0;
	range4.second = 8;
	assert(findPositionsOfFile(path5) == range4);

	string path6 = "test/hiker_test.exs";
	pair<int, int> range6;
	range6.first = 5;
	range6.second = 10;
	assert(findPositionsOfFile(path6) == range6);

	string path7 = "test_hiker.rb";
	assert(findPositionsOfFile(path7) == range6);

	string path8 = "test_hiker.py";
	assert(findPositionsOfFile(path8) == range6);

	string path9 = "test_hiker.sh";
	assert(findPositionsOfFile(path9) == range6);

	string path10 = "test_hiker.coffee";
	assert(findPositionsOfFile(path10) == range6);

	string path11 = "hiker_steps.rb";
	pair<int, int> range;
	range.first = 0;
	range.second = 5;
	assert(findPositionsOfFile(path11) == range);

	string path12 = "hiker_spec.rb";
	assert(findPositionsOfFile(path12) == range);

	string path13 = "hiker_spec.coffee";
	assert(findPositionsOfFile(path13) == range);

	string path14 = "hikerTest.chpl";
	assert(findPositionsOfFile(path14) == range);

	string path15 = "hiker.tests.c";
	assert(findPositionsOfFile(path15) == range);

	string path16 = "hiker_tests.c";
	assert(findPositionsOfFile(path16) == range);

	string path17 = "hiker_test.c";
	assert(findPositionsOfFile(path17) == range);

	string path18 = "hiker_Test.c";
	assert(findPositionsOfFile(path18) == range);

	string path19 = "HikerTests.cpp";
	assert(findPositionsOfFile(path19) == range);

	string path20 = "hikerTests.cpp";
	assert(findPositionsOfFile(path20) == range);

	string path21 = "HikerTest.cs";
	assert(findPositionsOfFile(path21) == range);

	string path22 = "HikerTest.java";
	assert(findPositionsOfFile(path22) == range);

	string path23 = "HikerTest.php";
	assert(findPositionsOfFile(path23) == range);

	string path24 = "hikerTest.js";
	assert(findPositionsOfFile(path24) == range);

	string path25 = "hiker-test.js";
	assert(findPositionsOfFile(path25) == range);

	string path26 = "hiker-spec.js";
	assert(findPositionsOfFile(path26) == range);

	string path27 = "hiker.test.js";
	assert(findPositionsOfFile(path27) == range);

	string path28 = "hiker.tests.ts";
	assert(findPositionsOfFile(path28) == range);

	string path29 = "hiker_tests.erl";
	assert(findPositionsOfFile(path29) == range);

	string path30 = "hiker_test.clj";
	assert(findPositionsOfFile(path30) == range);

	string path31 = "hiker_test.go";
	assert(findPositionsOfFile(path31) == range);

	string path32 = "hiker.tests.R";
	assert(findPositionsOfFile(path32) == range);

	string path34 = "hikertests.swift";
	assert(findPositionsOfFile(path34) == range);

	string path35 = "HikerSpec.groovy";
	assert(findPositionsOfFile(path35) == range);

	string path36 = "hikerSpec.feature";
	assert(findPositionsOfFile(path36) == range);

	string path37 = "hiker.feature";
	assert(findPositionsOfFile(path37) == range);

	string path38 = "hiker.fun";
	assert(findPositionsOfFile(path38) == range);

	string path39 = "hiker.t";
	assert(findPositionsOfFile(path39) == range);

	string path40 = "hiker.plt";
	assert(findPositionsOfFile(path40) == range);

	string path41 = "hiker";
	assert(findPositionsOfFile(path41) == range);


}