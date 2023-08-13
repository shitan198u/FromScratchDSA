#include <bits/stdc++.h>
using namespace std;

int sumTillN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else{
        return n + sumTillN(n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    int x = sumTillN(n);
    cout << x << endl;

    return 0;
}