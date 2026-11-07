#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int k = n / 2;
 
    if (k % 2 != 0) {
        cout << "NO
";
        return;
    }
 
    cout << "YES
";
 
    // First half: even numbers
    for (int i = 1; i <= k; i++) {
        cout << 2 * i << " ";
    }
 
    // Second half: first k-1 odd numbers
    for (int i = 1; i < k; i++) {
        cout << 2 * i - 1 << " ";
    }
 
    // Last odd number
    cout << 3 * k - 1 << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}