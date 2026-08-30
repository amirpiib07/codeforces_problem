#include <bits/stdc++.h>
using namespace std;
 
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int diff = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 'A') diff++;
        else diff--;
    }
    if (diff > 0) cout<< "Anton" <<endl;
    else if (diff < 0) cout << "Danik" <<endl;
    else cout << "Friendship" << endl;
    return 0;
}