#include <bits/stdc++.h>
using namespace std;

int powLog(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b % 2 == 0)
    {
        return powLog(a * a, b / 2);
    }
    else
    {
        return a * powLog(a, b - 1);
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << powLog(a, b);

    return 0;
}