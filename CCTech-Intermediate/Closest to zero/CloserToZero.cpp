
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

using namespace std;

string findClosedElements(vector<int> vec)
{
	if (vec.size() == 0)
	{
		string st = "Empty";
		return st;
	}
	else if(vec.size() == 1 && vec[0] == 0)
	{
		string st = "No Closest Element";
		return st;
	}
	else
	{
		sort(vec.begin(), vec.end());

		int max = vec[vec.size() - 1],
			min = vec[0];

		for (int i = 0; i < vec.size(); i++)
		{
			if (vec[i] == 0)
			{
				continue;
			}
			else
			{
				if (vec[i] > 0)
				{
					if (max > vec[i])
					{
						max = vec[i];
					}
				}
				else
				{
					if (min < vec[i])
					{
						min = vec[i];
					}
				}
			}
		}

		if (abs(max) == abs(min))
		{
			return to_string(max);
		}
		else
		{
			string str = to_string(max) + " " + to_string(min);
			return str;
		}
	}
	
}

int main()
{
	vector<int> vec = { -1, -2, 0, 1, 6, 7 }; 
	assert(findClosedElements(vec) == "1");

	vec = {};
	assert(findClosedElements(vec) == "Empty");
	
	vec = { 0 };
	assert(findClosedElements(vec) == "No Closest Element");

	vec = { -1, 6 };
	assert(findClosedElements(vec) == "6 -1");

	vec = { 10 };
	assert(findClosedElements(vec) == "10");

	vec = { 9, 7, -5, -5, -5};
	assert(findClosedElements(vec) == "7 -5");

	vec = { 9, 9, 7, 8, 4 };
	assert(findClosedElements(vec) == "4");

	vec = { -9, -7, -7, -8, -4 };
	assert(findClosedElements(vec) == "-4");



}
