#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            int temp = v[j];
            if(v[j]<v[j-1]){
                v[j-1]=v[j];
                v[i]=v[j];
            }
            v[j+1]=temp;
        }
        
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (auto &p : v)
    {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}