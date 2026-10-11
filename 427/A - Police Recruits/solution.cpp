#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int ans = 0, h = 0;
    for (int idx = 0; idx < n; idx++)
    {
        int x;
        cin >> x;
        if (x != -1)
            h += x;
        else
        {
            if (h > 0)
            {
                h--;
            }
            else
            {
                ans++;
            }
        }
    }
 
    cout << ans << '
';
    return 0;
}