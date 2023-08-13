#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] < v[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap(v[i],v[min_idx]);
        }
    }
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr;
    int input;

    for (int i = 0; i < size; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    selectionSort(arr);

    for (auto &itr : arr)
    {
        cout << itr << " ";
    }
    cout << endl;

    return 0;
}