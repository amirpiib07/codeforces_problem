#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin >> m >> n;
    int leftrow= 0;
    int idx=0;
    int ans=0;
    while (idx< m) {
        leftrow+= n%2==0?0:1;
        ans = ans + n/2;
        idx++;
    }
    ans+= leftrow/2;
    cout << ans;
 
    return 0;
}