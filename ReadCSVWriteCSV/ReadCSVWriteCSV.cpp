#include "employee.h"
using namespace std;

int main()
{
    ifstream empin;
    ofstream empout;
    string in;
    string out;
    string line;
    string sentence, lastname, firstname, position, location;
    int age;
    vector<string> temp;
    vector<vector<string>> emp;
    cout << "Enter the Input CSV Filename ==> ";
    cin >> in;
    cout << "Enter the Output CSV Filename ==> ";
    cin >> out;
    employee e1(in, out);
    e1.ReadFromFile();
    e1.AddToRow(line);
    e1.AddToLine();
    e1.WriteToFile();
    e1.CloseFiles();
}
