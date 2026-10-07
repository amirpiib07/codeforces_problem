#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ll toast = min({k * l / nl, c * d, p / np});
    cout << toast / n << endl;
    return 0;
}