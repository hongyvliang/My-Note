#include <iostream>
#include <cstdio>
using namespace std;

int count = 0;
int n;

int main()
{
    cin >> n;
    for(int i = 2 * n - 1;i >= 1;i -= 2)
    {
        for(int j = 1;j <= count;j++)
        {
            cout << " ";
        }
        for(int k = 1;k <= i;k++)
        {
            cout << "#";
        }
        cout << endl;
        count++;
    }
    // system("pause");
    return 0;
}