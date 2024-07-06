#include <iostream>
using namespace std;

bool flag = true;
int a,b,c;
int count = 0;

int main()
{
    while(cin >> a >> b >> c)
    {
        flag = true;
        count++;
        for(int i = 10;i <= 100;i++)
        {
            if(i % 3 == a && i % 5 == b && i % 7 == c)
            {
                cout << "Case " << count << ":" << i << endl;
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "Case " << count << ":" << "No answer" << endl;
        }
    }
    // system("pause");
    return 0;
}