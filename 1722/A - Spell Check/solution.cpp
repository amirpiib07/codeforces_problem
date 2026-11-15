#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        if (n != 5)
        {
            cout << "NO
";
            continue;
        }
 
        int T = 0, i = 0, m = 0, u = 0, r = 0;
        for (int idx = 0; idx < 5; idx++)
        {
            if (s[idx] == 'T')
                T++;
            else if (s[idx] == 'i')
                i++;
            else if (s[idx] == 'm')
                m++;
            else if (s[idx] == 'u')
                u++;
            else if (s[idx] == 'r')
                r++;
        }
 
        if (T == 1 && i == 1 && m == 1 && u == 1 && r == 1)
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