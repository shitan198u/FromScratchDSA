#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return;
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
    bubbleSort(arr);

    for (auto &itr : arr)
    {
        cout << itr << " ";
    }
    cout << endl;

    return 0;
}