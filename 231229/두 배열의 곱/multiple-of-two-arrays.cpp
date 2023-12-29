#include <iostream>
using namespace std;

int main()
{
    int array1[3][3] = {0};
    int array2[3][3] = {0};
    int array[3][3] = {0};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < 3)
            {
                cin >> array1[i][j];
            }
            else
            {
                cin >> array2[i - 3][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = array1[i][j] * array2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}