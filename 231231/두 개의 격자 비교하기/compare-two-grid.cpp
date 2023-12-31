#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    int m = 0;

    cin >> n >> m;

    vector<vector<int>> array1(n,vector<int>(m));
    vector<vector<int>> array2(n,vector<int>(m));
    vector<vector<int>> array(n,vector<int>(m));

    for (int i = 0; i < n * 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i < n)
            {
                cin >> array1[i][j];
            }
            else
            {
                cin >> array2[i - n][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array1[i][j] == array2[i][j])
            {
                array[i][j] = 0;
            }
            else
            {
                array[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
