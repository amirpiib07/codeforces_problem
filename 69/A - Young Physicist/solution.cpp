#include <bits/stdc++.h>
using namespace std;
 
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vector<int> x(100);
    vector<int> y(100);
    vector<int> z(100);
    int idx = 0;
    while (t--) {
        cin >> x[idx] >> y[idx] >> z[idx];
        idx++;
    }
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < x.size(); i++) {
        sum1 += x[i];
        sum2 += y[i];
        sum3 += z[i];
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}