#include<bits/stdc++.h>
using namespace std;

char invertChar(char &c){
    if(c>='a' && c<='z'){
        c= c -'a' + 'A';
    }
    else{
        c = c - 'A' + 'a';
    }
    return c;
}

void invertedString(string &s){
    int size = s.size();

    for (int i = 0; i < size; i++)
    {
        if(s[i]>= 'A'&& s[i]<='Z'){
            cout<<endl;
        }
        cout<<invertChar(s[i]);

    }
    

}

int main()
{
    string s;
    cin>>s;

    invertedString(s);

    return 0;
}