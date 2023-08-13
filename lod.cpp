#include <bits/stdc++.h>
using namespace std;

int countSpecificNum(int m, int n)
{
    if (m <= n)
    {
        int count = 0;
        for (int i = m; i <= n; i++)
        {
            int num = i;
            int flag = 1;
            while (num)
            {
                int digit = num % 10;
                num /= 10;
                if (digit != 1 && digit != 9 && digit != 4)
                {
                    flag = false;
                    break;
                }
            }
            if (flag == 1)
            {
                count++;
            }
        }
        return count;
    }
    return -1;
}

int main()
{
    int n, m;
    cin >> m >> n;

    cout << countSpecificNum(m, n) << endl;

    return 0;
}