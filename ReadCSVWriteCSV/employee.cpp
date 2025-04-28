#include "employee.h"

employee::employee(string n, string o)
{
	this->in = n;
	this->out = o;
}
void employee::ReadFromFile()
{
	empin.open(in, ios::app);
    empout.open(out, ios::app);
}
void employee::AddToRow(string t)
{
    //this->temp = t;
    temp.push_back(t);
}
void employee::AddToLine()
{
    emp.push_back(temp);
}
void employee::WriteToFile()
{
    if (empin.is_open())
    {
        //string line, word;
        while (getline(empin, line))
        {
            stringstream gust(line);
            while (getline(gust, word,","))
            {
                for (int i = 0; i <= emp.size(); i++)
                {
                    for (int j = 0; j <= temp[i].size(); j++)
                    {
                        empout << emp[i][j] << " " << temp[i][j - 1];
                    }
                }
                empout << setw(50) << word;

            }
            empout << endl;
        }
    }
    else
    {
        cout << "Wrong!!" << endl;
    }
}
void employee::CloseFiles()
{
	empin.close();
	empout.close();
}
