#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    set<char> st;
    int n = s.size();
    for(int idx = 1; idx < n - 1; idx += 3) {
        st.insert(s[idx]);
    }
    cout << st.size() << '
';
    return 0;
}