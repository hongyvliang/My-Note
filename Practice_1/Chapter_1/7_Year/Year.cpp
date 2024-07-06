#include <iostream>
using namespace std;

int n;

int main()
{
    cin >> n;
    if(n % 100 == 0)
    {
        if(n % 400 == 0)
        {
            cout << "yes";
        }else
        {
            cout << "no";
        }
    }else
    {
        if(n % 4 == 0)
        {
            cout << "yes";
        }else
        {
            cout << "no";
        }
    }
    system("pause");
    return 0;
}