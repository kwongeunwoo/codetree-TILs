#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int num = 1;
    int column_count = 1;
    std::vector<std::vector<int>> array(n, std::vector<int>(n, 0));

    for(int column = n-1; column>=0; column--)
    {
        for(int raw = n-1; raw>=0; raw--)
        {
            if(column_count%2==1)
            {
                array[raw][column]=num;
                num++;
            }
            else
            {
                array[n-1-raw][column]=num;
                num++;
            }
        }
        column_count++;
    }

    for(int i =0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}