#include <iostream>
using namespace std;

int a = 0,b = 0,c = 0;

int main()
{
    for(int i = 100;i <= 999;i++)
    {
        a = i / 100,b = i / 10 % 10,c = i % 10;
        if(a * a * a + b * b * b + c * c * c == i)
        {
            cout << i << endl;
        }
    }
    // system("pause");
    return 0;
}