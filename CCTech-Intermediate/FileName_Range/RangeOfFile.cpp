#include "RangeOfFile.h"

using namespace std;

pair<int, int> specificWordPresentAtEnd(size_t& found, string& fileName, int& position)
{
	pair<int, int> range;

	if ((fileName[found - 1] == '-' || fileName[found - 1] == '.' || fileName[found - 1] == '_'))
	{
		range.first = position;
		range.second = position + (int)found - 1;
		return range;
	}
	else
	{
		range.first = position;
		range.second = position + (int)found;
		return range;
	}
}

pair<int, int> specificWordPresentAtStarting(size_t& found, string& fileName, int& position, int& startPosition)
{
	pair<int, int> range;
	if (fileName[position] == '-' || fileName[position] == '.' || fileName[position] == '_')
	{
		range.first = startPosition + position + 1;
		range.second = startPosition + (int)fileName.find_last_of('.');
		return range;
	}
	else
	{
		range.first = startPosition + position;
		range.second = startPosition + (int)fileName.find_last_of('.');
		return range;
	}
}

pair<int, int> positionOfFileWithoutSpecificWord(string& fileName, int& position)
{
	pair<int, int> range;
	int index = (int)fileName.find_last_of('.');
	range.first = position;
	if (index == -1)
	{
		range.second = (int)fileName.length();
	}
	else
	{
		range.second = index;
	}
	return range;
}

pair<int, int> findPositionsOfFile(string& path)
{
	vector<string> words = { "tests","test", "spec","step", "tests", "Test", "Spec", "Step" };
	pair<int, int> range;
	string fileName;
	int count = 0, startPosition = 0;

	if (path.find_last_of('/') != -1)
	{
		fileName = path.substr(path.find_last_of('/') + 1);
		startPosition = (int)path.find_last_of('/') + 1;
	}
	else
	{
		fileName = path;
	}

	for (int i = 0; i < words.size(); i++)
	{
		size_t found = fileName.find(words[i]);
		if (found != string::npos)
		{
			count++;
			if (found != 0)
			{
				range = specificWordPresentAtEnd(found, fileName, startPosition);
				return range;
			}
			else if (found == 0)
			{
				int position = (int)words[i].length();
				range = specificWordPresentAtStarting(found, fileName, position, startPosition);
				return range;
			}

		}
	}
	if (count == 0)
	{
		range = positionOfFileWithoutSpecificWord(fileName, startPosition);
		return range;
	}
	//return;
}