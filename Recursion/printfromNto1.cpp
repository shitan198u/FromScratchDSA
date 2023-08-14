#include <bits/stdc++.h>
using namespace std;

int print(int n)
{
    if (n == 1)
    {
        cout<<1<<endl;
        return 1;
    }
    else
    {
        int val = 1 + print(n - 1);
        cout<<val<<endl;
        return val;
    }
}

int main()
{
    int n;
    cin >> n;

    print(n);

    return 0;
}