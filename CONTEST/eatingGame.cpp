#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        set<int> winners;
        for (int start=0;start<n;start++) {
            vector<int> v(a);
            int sum=0;
            for (int ele:v) sum+=ele;
            int help=start;
            while (sum!=1) {
                if (v[help]>0) {
                    v[help]--;
                    sum--;
                }
                help=(help+1)%n;
            }
            for (int i=0;i<n;i++) {
                if (v[i]!=0) winners.insert(i+1);
            }
        }
        cout<<winners.size()<<endl;
    }
    return 0;
}
