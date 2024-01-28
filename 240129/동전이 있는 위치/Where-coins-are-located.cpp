#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    n = 0;
    m = 0;
    cin >> n >> m;
    vector<int> r(m, 0);
    vector<int> c(m, 0);
    int m_count = 0;

    vector<vector<int>> array(n, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        cin >> r[i] >> c[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == r[m_count] - 1 && j == c[m_count] - 1 && m_count < m)
            {
                array[i][j] = 1;
                m_count++;
            }
        }
    }

    for (const auto &row : array)
    {
        for (const auto &value : row)
        {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}