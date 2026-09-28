#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    while (n--) {
        long long a, b, c;
        cin >> a >> b >> c;
 
        vector<long long> v = {a, b, c};
        sort(v.begin(), v.end());
 
        long long mn = v[0];
        long long mid = v[1];
        long long mx = v[2];
 
        // Reduce the maximum using the other two
        mx = min(mx, mn + mid);
 
        cout << mx - mn << '
';
    }
 
    return 0;
}