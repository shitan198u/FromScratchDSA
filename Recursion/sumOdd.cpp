#include <bits/stdc++.h>
using namespace std;

int oddSum(int a, int b)
{
    if (a > b)
    {
        return 0;
    }
    else if(a == b){
        return a;
    }
    else
    {
        if (a % 2 != 0)
        {
            return a + oddSum(a + 1, b);
        }
        else
        {
            return oddSum(a+1, b);
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << oddSum(a, b) << endl;

    return 0;
}