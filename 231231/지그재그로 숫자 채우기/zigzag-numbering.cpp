#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    int num = 1;

    cin >> n >> m;

    // n*n vector를 모두 0으로 초기화
    vector<vector<int>> array(n, vector<int>(m, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                array[j][i] = num;
                num++;
            }
            else if (i % 2 == 1)
            {
                array[n - 1 - j][i] = num;
                num++;
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