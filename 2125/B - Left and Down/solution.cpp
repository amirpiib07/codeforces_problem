#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while(n--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long g = gcd(a, b);
        if (max(a/g,b/g) <= k) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}