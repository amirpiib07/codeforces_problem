#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin>>s;
    string ans = "";
    //bool flag = false;
    for (char ch: s) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'y' || ch == 'Y' || ch == 'A'
            || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') continue;
        if (ch>='A' && ch<='Z') ch^=32;
        ans += '.';
        ans += ch;
    }
 
    cout << ans << endl;
    return 0;
}