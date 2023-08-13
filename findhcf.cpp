#include <iostream>
#include <set>
#include <cmath>
using namespace std;

// A simple implementation of Euler's totient function
int phi(int n)
{
    int result = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            result -= result / i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main()
{
    int l, x;
    cin >> l;
    cin >> x;

    // Use a set to store potential numbers to check
    set<int> candidates;
    for (int i = x; i <= l; i += x)
    {
        candidates.insert(i);
    }

    // Use a formula to calculate the number of pairs
    int count = (phi(l/x) * phi(l/x) - phi(l/x))/2;

    cout << count << "\n";

    return 0;
}
