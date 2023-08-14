#include <bits/stdc++.h>
using namespace std;

void print(int a, int b)
{
    if(b<a){
        return;
    }
    cout<<a<<endl;
    return print(a+1,b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    print(a, b);

    return 0;
}