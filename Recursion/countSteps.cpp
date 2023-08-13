#include<bits/stdc++.h>
using namespace std;

int countSteps(int n);

int main()
{
    int n;
    cin>> n;
    cout<<countSteps(n)<<endl;

    return 0;
}

int countSteps(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(n == 2){
        return 2;
    }

    return countSteps(n-3)+countSteps(n-2)+countSteps(n-1);
}