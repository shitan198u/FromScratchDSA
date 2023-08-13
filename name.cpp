
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        string name1, name2;
        cin >> name1 >> name2;

        int answer = 0, count = 0;

        int size_small = min(name1.size(), name2.size());
        int size_large = max(name1.size(), name2.size());

        for (int i = 0; i < size_small; i++)
        {
            if (name1[i] == name2[i])
            {
                answer += 2;
            }
        }

        vector<int> n1(26, 0);
        vector<int> n2(26, 0);

        for (int i = 0; i < name1.size(); i++)
        {
            n1[name1[i]-'a']++;
        }

        for (int i = 0; i < name2.size(); i++)
        {
            n2[name2[i]-'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            count += min(n1[i], n2[i]);
        }

        answer+= count - answer/2;

        cout << answer << endl;
    }
}
