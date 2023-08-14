#include <bits/stdc++.h>
using namespace std;

void print(int n, int b = 1)
{
    if (n < b || b == 0)
    {
        return;
    }
    cout << b << " ";
    if (n == b)
    {
        print(n - 1, b - 1);
    }
    else
    {
        print(n, b + 1);
    }
}

int main()
{
    int n;
    cin >> n;

    print(n);

    return 0;
}