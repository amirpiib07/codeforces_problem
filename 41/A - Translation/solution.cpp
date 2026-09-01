#include <bits/stdc++.h>
using namespace std;
 
int main () {
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    string s, t;
    cin >> s >> t;
    bool found = true;
    reverse (s.begin(), s.end());
    if (s != t) found = false;
    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}