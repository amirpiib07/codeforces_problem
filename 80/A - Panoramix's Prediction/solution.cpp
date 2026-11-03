#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n) {
    if (n < 2) return false;
 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
 
    return true;
}
 
int main() {
    int n, m;
    cin >> n >> m;
 
    for (int i = n + 1; ; i++) {
        if (isPrime(i)) {
            cout << (i == m ? "YES" : "NO");
            break;
        }
    }
 
    return 0;
}