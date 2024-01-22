#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<vector<int>> array(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || i == j)
            {
                array[i][j] = 1;
            }
            else if (j > i)
            {
                array[i][j] = 0;
            }
            else
            {
                array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                cout << array[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}