#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

bool PrimeCheckFunction(int &num)
{
    bool primecheck = true; // 소수면 true
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            primecheck = false; // 자기 자신이 아닌 수 중 하나라도 나눠지면 소수 아님
        }
    }
    return primecheck;
}

void PrimeAddFunction(int &a, int &b)
{
    int i = a;
    for (; i <= b; i++)
    {
        if (PrimeCheckFunction(i) == true && i != 1) 
        {
            arr.push_back(i);
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    int value = 0;
    PrimeAddFunction(a, b);
    for (int i = 0; i < arr.size(); i++)
    {
        value += arr[i];
    }
    cout << value << endl;
    return 0;
}