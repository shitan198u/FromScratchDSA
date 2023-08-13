#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vec.push_back(m);
    }

    sort(vec.begin(), vec.end(), greater<int>());

    int change = 0, count = 0;
    int i = 0;
    while (change != 2)
    {
        if (vec[i] != vec[i + 1])
        {
            change++;
        }
        count++;
        i++;
    }
    cout<<count-2<<endl;

    return 0;
}