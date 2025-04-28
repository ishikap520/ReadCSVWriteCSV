#include "employee.h"
using namespace std;

int main()
{
    ifstream empin;
    ofstream empout;
    string in;
    string out;
    string line, row, word;
    string sentence;
    cout << "Enter the Input CSV Filename ==> ";
    cin >> in;
    cout << "Enter the Output CSV Filename ==> ";
    cin >> out;
    employee e1(in, out);
    e1.ReadFromFile();
    e1.AddToRow(line);
    e1.AddToLine();
    if (sentence == row[0], row[1])
    {
        empout << row[1] << " " << row[0] << word;
    }
    e1.WriteToFile();
    e1.CloseFiles();
}
