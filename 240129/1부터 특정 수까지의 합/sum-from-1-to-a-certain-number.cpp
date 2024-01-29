#include <iostream>
using namespace std;

int main()
{
    int N=0;
    cin >> N;

    int num = 0;

    for(int i = 0; i< N; i++)
    {
        num += i + 1;
    }
    cout << num / 10 << endl;
    return 0;
}