#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int t;
    cin >> t;
    while (t--) {
        char ch;
        cin >> ch;
        if (ch == 'c' || ch == 'o' || ch == 'd' || ch == 'f' || ch == 'e' || ch == 'r'
            || ch == 's' ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}