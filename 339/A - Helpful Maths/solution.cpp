#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int one = 0, two = 0, three = 0;
 
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] == '1') one++;
        if (s[i] == '2') two++;
        if (s[i] == '3') three++;
    }
    int idx = 0;
    while (one--) {
        s[idx] = '1';
        idx += 2;
    }
    while (two--) {
        s[idx] = '2';
        idx += 2;
    }
    while (three--) {
        s[idx] = '3';
        idx += 2;
    }
 
    cout << s << '
';
    return 0;
}