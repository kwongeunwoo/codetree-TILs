#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int value = 1;
    for(int i = 1; i <= b; i++)
    {
        value = value * a;
    }
    cout << value << endl;
    return 0;
}