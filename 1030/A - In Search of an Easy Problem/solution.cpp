#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x) flag = true;
    }
    if (flag) {
        cout << "HARD" << endl;
    }
    else {
        cout << "EASY" << endl;
    }
    return 0;
}