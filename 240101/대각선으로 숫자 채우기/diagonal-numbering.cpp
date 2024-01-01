#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int i = 0;
    int j = 0;
    int slice = 0; //대각선 개수 세기 용. 대각선의 수는 n+m-1

    std::vector<std::vector<int>> array(n, std::vector<int>(m, 0));

    int num = 1;

    while (slice < n + m - 1)
    {
        if (j == 0 || i == n - 1)
        {
            array[i][j] = num;
            num++;
            if (slice < m - 1)
            {
                i = 0;
                j = slice + 1;
            }
            else
            {
                i = slice - (m - 2);
                j = m - 1;
            }
            slice++;
        }
        else
        {
            array[i][j] = num;
            num++;
            i++;
            j--;
        }
    }

    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < m; b++)
        {
            cout << array[a][b] << " ";
        }
        cout << endl;
    }

    return 0;
}