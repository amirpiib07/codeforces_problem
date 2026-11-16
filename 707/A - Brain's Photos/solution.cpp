#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m, n;
    cin >> m >> n;
    bool flag = false;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            char ch;
            cin >> ch;
            if(ch == 'C' or ch == 'M' or ch == 'Y') flag = true;
        }
    }
    if(flag) {
        cout << "#Color" << endl;
    } else {
        cout << "#Black&White" << endl;
    }
    return 0;
}