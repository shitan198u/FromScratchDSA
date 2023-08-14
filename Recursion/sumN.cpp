#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    if(a>b)
        return 0;
    return a + sum(a+1,b);

}

int main()
{
    int n;
    cin>>n;

    cout<<sum(1,n)<<endl;

    return 0;
}