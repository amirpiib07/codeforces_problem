#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int i = 0;
 
    while (i < n) {
        char c = (s1.at(i) >= 97 && s1.at(i) <= 122)
                     ? s1.at(i)
                     : s1.at(i) + 32;
 
        char d = (s2.at(i) >= 97 && s2.at(i) <= 122)
                     ? s2.at(i)
                     : s2.at(i) + 32;
 
        if (c != d) {
            if (c > d) {
                cout << 1;
                return 0;
            } else {
                cout << -1;
                return 0;
            }
        }
        i++;   
    }
 
    cout << 0;
    return 0;
}