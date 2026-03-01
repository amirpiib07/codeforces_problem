#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        for (char ch: s) {
            if (!st.empty()&&st.top() == ch) {
                st.pop();
            }
            else st.push(ch);
        }
        cout<<(st.empty()?"YES":"NO")<<endl;
    }
    return 0;
}
