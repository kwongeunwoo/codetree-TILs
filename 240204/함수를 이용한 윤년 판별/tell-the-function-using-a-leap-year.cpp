#include <iostream>
using namespace std;

bool CheckFunction(int &year)
{
    if(year % 4 != 0)
    {
        return false;
    }
    else if(year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
        return true;
}

int main()
{
    int year = 0;
    cin >> year;
    if(CheckFunction(year)==true)
    {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
    return 0;
}