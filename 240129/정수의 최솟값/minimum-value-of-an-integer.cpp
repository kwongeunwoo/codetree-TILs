#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int min = 0;
    if(a <= b && a <= c)
    {
        min = a;
    }
    else if(a <= b && a > c)
    {
        min = c;
    }
    else if(a > b && a <= c)
    {
        min = b;
    }
    else
    {
        if(b <= c)
        {
            min = b;
        }
        else
            min = c;
    }

    cout << min << endl;
    return 0;
}