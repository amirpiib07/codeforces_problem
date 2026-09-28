#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    int total = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
 
    
    sort(a.rbegin(), a.rend());
 
    int taken = 0;
    int count = 0;
 
    for (int coin : a) {
        taken += coin;
        count++;
 
        
        if (taken > total - taken) {
            break;
        }
    }
 
    cout << count << '
';
 
    return 0;
}