#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    vector<vector<int>> matrix (n,vector<int>(n,0));

    int r,c;
    int num = 1;
    for(int i = 0; i<m; i++)
    {
        cin >> r >> c;
        matrix[r-1][c-1] = num;
        num++;
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}