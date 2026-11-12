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
        vector<bool> bits(26, false);
        for(int i = 0; i < n / 2; ++i) {
            int u = s[i] - 'a';
            int v = s[n - 1 - i] - 'a';
            if(u > v) swap(u, v);
            for(int j = u; j < v; ++j) {
                bits[j] = true;
            }
        }
 
        int ans = 0;
        for(int idx = 0; idx < 26; ++idx)
            if (bits[idx])
                ans++;
        
        cout << ans << endl;        
    }
    return 0;
}