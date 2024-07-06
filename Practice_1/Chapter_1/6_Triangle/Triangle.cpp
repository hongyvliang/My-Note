#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int m[3] = {0};

bool cmp(int x,int y)
{
    return x < y;
}

int main()
{
    for(int i = 0;i <= 2;i++)
    {
        cin >> m[i];
    }
    sort(m,m + 3,cmp);
    // printf("%d %d %d",m[0],m[1],m[2]);
    if((m[2] < m[0] + m[1]) && (m[1] > m[2] - m[0]))
    {
        if(m[0] * m[0] + m[1] * m[1] == m[2] * m[2])
        {
            cout << "yes";
        }else{
            cout << "no";
        }
    }else{
        cout << "not a triangle";
    }
    // system("pause");
    return 0;
}