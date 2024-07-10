#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int &num)
{
    if(num < 2) return false;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0) return false;
    } 
    return true;
}

bool isEven(int &num)
{
    int total = 0;
    string s = to_string(num);
    for (auto i : s)
    {
        total = total + i - '0';
    }
    if(total % 2 == 0)return true;
    return false;
}

void Func(int &a,int &b)
{
    int count = 0;
    for(int i = a; i <= b; i++)
    {
        if(isPrime(i) && isEven(i))
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    int a,b;
    cin >> a >> b;
    Func(a,b);
    return 0;
}