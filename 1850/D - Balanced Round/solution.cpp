#include<bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int n;
    long long k;
    cin >> n >> k;
 
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    int max_len = 1;
    int current_len = 1;
 
    for (int i = 1; i < n; ++i)
    {
        if (a[i] - a[i - 1] <= k)
        {
            current_len++;
            max_len = max(max_len, current_len);
        }
        else
        {
            current_len = 1;
        }
    }
 
    cout << n - max_len << "
";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}