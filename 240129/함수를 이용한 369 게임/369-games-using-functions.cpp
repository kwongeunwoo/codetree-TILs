#include <iostream>
using namespace std;

int DistinguishFunction(int &a, int &b)
{
    int value = 0;
    int count_num = a;

    while (count_num <= b)
    {
        if (count_num % 3 == 0) //3의 배수인 경우
        {
            value++;
            count_num++;
        }
        else
        {
            if (count_num / 10 == 3 || count_num / 10 == 6 || count_num / 10 == 9) //10의 자리에 3,6,9가 들어가는 경우
            {
                value++;
                count_num++;
            }
            else if(count_num % 10 == 3 || count_num % 10 == 6 || count_num % 10 == 9) //1의 자리에만 3,6,9가 들어가는 경우
            {
                value++;
                count_num++;
            }
            else
                count_num++;
        }
    }
    return value;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << DistinguishFunction(a, b) << endl;
    return 0;
}