#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    int num = 1;

    cin >> n;
    // n*n vector를 모두 0으로 초기화
    vector<vector<int>> array(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array[j][i] = num;
            num++;
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