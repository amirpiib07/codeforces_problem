#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        int ans = 0;
 
        for (int idx = 0; idx < n; idx += k) {
            bool one = true;
            for (int i = idx; i < idx + k; i++) {
                if (s[i] == '0') {
                    one = false;
                    break;
                }
            }
            if (one) {
                ans++;
            }
        }
 
 
        cout << ans << endl;
 
    }
    return 0;
}