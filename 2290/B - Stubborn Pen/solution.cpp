#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = s[0] == 'R' ? 0 : 1;
        for(int i = 1; i < n; i++) {
            char cur = s[i];
            char prev = s[i - 1];
            if (cur == prev) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}