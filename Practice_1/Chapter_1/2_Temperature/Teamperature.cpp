#include <iostream>
#include <cstdio>
using namespace std;

double f,c;

int main()
{
    cin >> f;
    c = 5 * (f - 32) / 9;
    printf("%.03f",c);
    // system("pause");
    return 0;
}