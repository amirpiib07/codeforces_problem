#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int odd = 0, z = 0, x = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            m[a]++;
            if (a % 2 ) {
                odd++;
            } else if (a % 4 == 0) {
                z++;
            } else {
                x++;
            }
        }
        int k = 0;
        for (auto i : m) {
            k = max(k, i.second);
        }
        int ans = max({odd, z, x, k});
        cout <<  ans << endl;
    }
    return 0;
}