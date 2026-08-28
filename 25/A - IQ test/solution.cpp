#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int c_even = 0, c_odd = 0, idx_even = -1, idx_odd = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            c_even++;
            idx_even = i;
        }
        if (arr[i] % 2 == 1) {
            c_odd++;
            idx_odd = i;
        }
    }
    if (c_even == 1) cout << idx_even + 1 << endl;
    else cout << idx_odd + 1 << endl;
    return 0;
}