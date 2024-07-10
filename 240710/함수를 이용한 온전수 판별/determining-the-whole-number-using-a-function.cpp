#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int count = 0;

    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        string s = to_string(i);
        if(i%2 == 0){}
        else if(s[s.length()-1]=='5'){}
        else if(i%3 == 0 && i%9 != 0){}
        else
        {
            count++;
        }
    } 
    cout << count << endl;
    return 0;
}