#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int &x : a) cin >> x;
 
        int common;
 
        if (a[0] == a[1])
            common = a[0];
        else if (a[0] == a[2])
            common = a[0];
        else
            common = a[1];
 
        for (int i = 0; i < n; i++) {
            if (a[i] != common) {
                cout << i + 1 << '
';
                break;
            }
        }
    }
}