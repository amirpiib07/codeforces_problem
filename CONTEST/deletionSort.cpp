#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int >a(n);
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }

        int found=0;
        for (int i=1;i<n;i++) {
            if (a[i]>=a[i-1]) found=1;
            else {
                found=0;
                break;
            }
        }
        if (found==1) cout<<n<<endl;
        else cout<<1<<endl;

    }
    return 0;
}
