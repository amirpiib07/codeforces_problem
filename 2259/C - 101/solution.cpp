#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int &x : a) cin >> x;
 
        vector<int> ones;
        for (int i = 0; i < n; i++)
            if (a[i] == 1)
                ones.push_back(i);
 
        int l = -1, r = -1;
 
        if (ones.empty()) {
            for (int i = 0; i < n; i++) {
                if (a[i] == -1) {
                    if (l == -1) l = i;
                    r = i;
                }
            }
        } else {
            int best = 0;
 
            if (ones[0] > 0) {
                for (int i = 0; i < ones[0]; i++) {
                    if (a[i] == -1) {
                        if (ones[0] - i > best) {
                            best = ones[0] - i;
                            l = i;
                            r = ones[0];
                        }
                        break;
                    }
                }
            }
 
            for (int i = 1; i < ones.size(); i++) {
                if (ones[i] - ones[i - 1] > best) {
                    best = ones[i] - ones[i - 1];
                    l = ones[i - 1];
                    r = ones[i];
                }
            }
 
            if (ones.back() < n - 1) {
                for (int i = n - 1; i > ones.back(); i--) {
                    if (a[i] == -1) {
                        if (i - ones.back() > best) {
                            l = ones.back();
                            r = i;
                        }
                        break;
                    }
                }
            }
        }
 
        for (int &x : a)
            if (x == -1)
                x = 0;
 
        if (l != -1) {
            a[l] = 1;
            a[r] = 1;
        }
 
        for (int x : a)
            cout << x << " ";
 
        cout << endl;
    }
    return  0;
}