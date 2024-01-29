#include <iostream>
using namespace std;

void DistinguishFunction(int &n)
{
    if(n%2 == 0 && (n/10 + n%10)%5 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int n = 0;
    cin >> n;
    DistinguishFunction(n);
    return 0;
}