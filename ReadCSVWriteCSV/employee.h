#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class employee
{
	string in;
	string out;
	string line, word;
	ifstream empin;
	ofstream empout;
	vector<string> temp;
	vector<vector<string>> emp;

public:
	employee(string, string);
	void ReadFromFile();
	void AddToRow(string);
	void AddToLine();
	void WriteToFile();
	void CloseFiles();
};

