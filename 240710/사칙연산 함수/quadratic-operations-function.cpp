#include <iostream>
using namespace std;

int main()
{
    int a,c;
    char o;
    cin >> a >> o >> c;

    if(o != '+' && o != '-' && o != '*' && o != '/')
    {
        cout << "False" << endl;
    }
    else
    {
        switch(o)
        {
            case '+':
                cout << a << " " << o << " " << c << " = " << a+c;
                break;

            case '-':
                cout << a << " " << o << " " << c << " = " << a-c;
                break;
            
            case '*':
                cout << a << " " << o << " " << c << " = " << a*c;
                break;
            
            case '/':
                cout << a << " " << o << " " << c << " = " << int(a/c);
                break;

            default:
                break;
        }
    }
    return 0;
}