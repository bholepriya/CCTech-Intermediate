#pragma once
#include<iostream>
#include <string>
#include<vector>

using namespace std;

pair<int, int> specificWordPresentAtEnd(size_t& found, string& fileName, int& position);

pair<int, int> specificWordPresentAtStarting(size_t& found, string& fileName, int& position, int& startPosition);

pair<int, int> positionOfFileWithoutSpecificWord(string& fileName, int& position);

pair<int, int> findPositionsOfFile(string& path);