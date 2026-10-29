#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    int maxWelfare = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxWelfare = max(maxWelfare, a[i]);
    }
 
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        ans += maxWelfare - a[i];
    }
 
    cout << ans << '
';
 
    return 0;
}