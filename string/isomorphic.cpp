#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size())
        cout << "NO" << endl;

    else
    {
        int arr1[128], arr2[128];
        for (int i = 0; i < s1.size(); i++)
        {
            arr1[int(s1[i])]++;
            arr2[int(s2[i])]++;
        }
    }

    return 0;
}