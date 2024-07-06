#include <iostream>
#include <cstdio>
using namespace std;

int n;
double sum = 0;

int main()
{
    cin >> n;
    sum = n * 95;
    if(sum >= 300)
    {
        sum  = sum * 0.85;
    }
    printf("%.02f",sum);
    system("pause");
    return 0;
}