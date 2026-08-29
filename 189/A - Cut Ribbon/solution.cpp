#include <bits/stdc++.h>
using namespace std;
 
int solve(int n, int a, int b, int c, vector<int>& dp) {
    if (n == 0) return 0;
    if (n < 0)
        return -1e9;
    if (dp[n] != -1) return dp[n];
    int ans1 = 1+solve(n-a,a,b,c,dp);
    int ans2 = 1+solve(n-b,a,b,c,dp);
    int ans3 = 1+solve(n-c,a,b,c,dp);
    return dp[n] = max({ans1,ans2,ans3});
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> dp(n+1,-1);
    int ans  = solve(n,a,b,c,dp);
    cout<<ans<<endl;
    return 0;
}