#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long diff = abs(a - b);
        long long ans = (diff + 9) / 10; 
        cout << ans << "
";
    }
    return 0;
}