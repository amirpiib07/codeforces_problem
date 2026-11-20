#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, m;
    if (!(cin >> n >> m)) return 0;
 
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    
    sort(a.begin(), a.end());
 
    int max_earnings = 0;
    for (int i = 0; i < m; ++i) {
        if (a[i] < 0) {
            max_earnings += -a[i];
        } else {
            
            break;
        }
    }
 
    cout << max_earnings << "
";
 
    return 0;
}