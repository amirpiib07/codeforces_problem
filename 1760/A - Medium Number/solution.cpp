#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a <= b && b <= c || c <= b && b <= a) {
            cout << b << endl;
 
        }
        else if (b <= a && a <= c || c <= a && a <= b) {
            cout << a << endl;
 
        }
        else if (a <= c && c <= b || b <= c && c <= a) {
            cout << c << endl;
 
        }
    }
    return 0;
}