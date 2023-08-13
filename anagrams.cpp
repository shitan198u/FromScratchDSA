#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    string s1,s2;
    cin>>s1>>s2;
    if (areAnagrams(s1, s2)) {
        cout << s1 << " and " << s2 << " are anagrams" << endl;
    } else {
        cout << s1 << " and " << s2 << " are not anagrams" << endl;
    }
    return 0;
}
