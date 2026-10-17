#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> arr = {a, b, c};
    sort(arr.begin(), arr.end());
    a = arr[0]; b = arr[1]; c = arr[2];
    cout << min({b - a + c - a, b - a + c - b, c - b + c - a});
    return 0;
}