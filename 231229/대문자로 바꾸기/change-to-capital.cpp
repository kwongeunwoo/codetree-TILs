#include <iostream>
using namespace std;

int main()
{
    char array[5][3];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j<3; j++)
        {
            char temp;
            cin >> temp;
            array[i][j] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout << char(int(array[i][j]) - 32)<< " ";
        }
        cout << endl;
    }
    return 0;
}