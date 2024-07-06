#include <iostream>
#include <cstdio>
using namespace std;

int count = 1;
double n,m,temp;
double sum = 0;

int main()
{
    while(cin >> n >> m)
    {
        sum = 0;
        if(n == 0 && m == 0)
        {
            break;
        }
        if(n * n >= 1e5)
        {
            cout << "Case " << count << ": 0.00001" << endl; 
        }else
        {
            for(int i = n;i <= m;i++)
            {
                temp = i * i;
                if(temp >= 1e6)
                {
                    break;
                }
                sum += 1.0 / temp;
            }
            printf("Case %d: %.05f\n",count,sum);
        }
        count++;
    }
    system("pause");
    return 0;
}