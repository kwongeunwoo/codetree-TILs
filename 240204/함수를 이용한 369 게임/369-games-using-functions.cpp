#include <iostream>
#include <string>
using namespace std;

int CountFunction(string &a, string &b)
{
    int i = stoi(a); // sring to int
    int count = 0;
    for (; i <= stoi(b); i++)
    {
        if (i % 3 == 0) // 3의 배수라면 카운트
        {
            count++;
        }
        else
        {
            string temp = to_string(i);
            bool check = false;
            for (int j = 0; j < temp.length(); j++) // 숫자 중 3,6,9가 포함되는지 확인
            {
                if (temp[j] - '0' == 3 || temp[j] - '0' == 6 || temp[j] - '0' == 9)
                {
                    check = true;
                }
            }
            if (check == true)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    string a, b;
    cin >> a >> b;

    cout << CountFunction(a, b) << endl;
    return 0;
}