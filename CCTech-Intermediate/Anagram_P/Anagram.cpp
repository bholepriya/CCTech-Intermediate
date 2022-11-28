#include <iostream>

using namespace std;

bool isNumAndNegative(string str)
{
	int p = 0;
	for (int i = 1; i < str.length(); i++)
	{
		if (str[0] == '-' && str[i] >= '0' && str[i] <= '9')
		{
			p++;
			continue;
		}
		else
		{
			return false;
		}
	}
	if (str[0] == '-' && p == str.length())
	{
		return true;
	}

}

bool anagramFunction(string &str, int start, int last)
{

	if (isNumAndNegative(str))
	{
		if (start == last)
		{
			cout << str << " ";
		}
		else
		{
			for (int i = start; i <= last; i++)
			{
				 swap(str[start], str[i]);
				anagramFunction(str, start + 1, last);
				swap(str[start], str[i]);
			}
		}
	}
	else
	{
		if (str[0] == '-')
		{
			return false;
		}
		else
		{
			if (start == last)
			{
				cout << str << " ";
			}
			else
			{
				for (int i = start; i <= last; i++)
				{
					swap(str[start], str[i]);
					anagramFunction(str, start + 1, last);
					swap(str[start], str[i]);
				}
			}
		}
		
	}
	
	return true;
}

int main()
{
	string str;
	cout << "Enter a string :- ";
	cin >> str;
	//int n = str.size();
    int n = str.length();
	if (isNumAndNegative(str))
	{
		anagramFunction(str, 1, n - 1);
	}
	else
	{
		if (!anagramFunction(str, 0, n - 1))
		{
			cout  << "Please Enter valid input";
		}
	}
	
}