#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s("NanindaTatepayo!"), str1, str2;
    // cin>>s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    s = s.substr(0, 3);
    cout << s << endl;
    s = s.substr(1);
    cout << s << endl;

    str1 = "Name";
    str2 = "Middle";

    //copy creating takes more time so more time complexity space too
    str1 = str1 + str2;
    cout<<str1<<endl;
    str1+=str2;//no copy created

    return 0;
}