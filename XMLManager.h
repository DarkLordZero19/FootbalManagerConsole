#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class XMLManager
{
private:
	int sizeArray;
public:
	string* readFile(string path);
	void writeFile(string path, string array, int size);
	int getsizeArray();
private:
	void addString(string*& array, string str, int sizeArray);
};

