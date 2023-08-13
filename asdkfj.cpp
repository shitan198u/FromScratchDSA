#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int l, x;
    cin >> l;
    cin >> x;

    vector<int> candidates; // Store potential numbers to check
    for (int i = x; i <= l; i += x)
    {
        candidates.push_back(i);
    }

    int count = 0; // Initialize the count of pairs

    for (int i : candidates)
    {
        for (int j : candidates)
        {
            if (__gcd(i, j) == x && j != i)
            {
                count++;
            }
        }
    }

    cout << count/2 << "\n";

    return 0;
}
