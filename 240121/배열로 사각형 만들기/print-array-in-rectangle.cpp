#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    vector<vector<int>> array(n, vector<int>(n, 1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != 0 && j != 0)
            {
                array[i][j] = array[i - 1][j] + array[i][j - 1];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}