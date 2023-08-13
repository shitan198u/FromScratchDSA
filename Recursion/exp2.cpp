#include <bits/stdc++.h>
using namespace std;

int expon2(int n)
{

    if (n == 1 || n == 0)
        return 1;
    else if (n % 2 != 0)
        return 0;
    else
        return expon2(n / 2);
}

int main()
{
    int n;
    cin >> n;

    cout << expon2(n) << endl;

    return 0;
}