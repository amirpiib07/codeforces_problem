#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        // 1. Reset frequency array for each test case
        vector<int> v(26, 0);
        for (char ch : s)
        {
            v[ch - 'a']++;
        }
 
        // 2. Count characters with odd frequencies
        int o = 0;
        for (int i = 0; i < 26; i++)
        {
            if (v[i] & 1)
                o++;
        }
 
        // 3. We need to reduce odd counts to at most 1 using k deletions
        if (o - 1 <= k)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
    }
    return 0;
}