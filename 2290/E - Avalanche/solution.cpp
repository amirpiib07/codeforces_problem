#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int parity = 0;
        for(int i = 1; i <= n; ++i) {
            long long a;
            cin >> a;
            if((i - 1) % (k + 1) == 0) {
                parity ^= (a % 2);
            }
        }
        if(parity == 1) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    return 0;
}