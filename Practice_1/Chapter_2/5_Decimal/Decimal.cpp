#include <iostream>
#include <cstdio>
using namespace std;

int a,b,c;
int tmp,tmp2;

int main()
{
    cin >> a >> b >> c;
    cout << a / b << ".";
    tmp = a / b;
    a = a - tmp * b;
    // cout << tmp << " " << a;
    for(int i = 1;i <= c;i++)
    {
        a *= 10;
        tmp = a / b;
        if(i == c)
        {
            a = a - tmp * b;
            a *= 10;
            tmp2 = a / b;
            if(tmp2 >= 5)
            {
                tmp++;
                cout << tmp;
            }else{
                cout << tmp;
            }
        }else{
            cout << tmp;
            a = a - tmp * b;
        }
    }
    system("pause");
    return 0;
}