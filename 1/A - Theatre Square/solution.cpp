#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long m,n,a;
    cin>>m>>n>>a;
    long long row = (m%a==0) ? m/a : m/a+1;
    long long col = (n%a==0) ? n/a : n/a+1;
    cout<<row*col<<endl;
    return 0;
}