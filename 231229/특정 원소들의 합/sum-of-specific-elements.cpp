#include <iostream>
using namespace std;

int main()
{
    int array[4][4] = {0};
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                sum += array[i][j];
            }
        }
    }

    cout << sum << endl;
    return 0;
}