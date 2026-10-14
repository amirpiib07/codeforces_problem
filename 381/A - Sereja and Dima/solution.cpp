#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0, j = n - 1;
    int s_score = 0, o_score = 0;
    bool flag = true;
    while (i <= j)
    {
        if (flag)
        {
            if (v[i] > v[j])
            {
                s_score += v[i];
                i++;
            }
            else
            {
                s_score += v[j];
                j--;
            }
            flag = !flag;
        }
        else
        {
            if (v[i] > v[j])
            {
                o_score += v[i];
                i++;
            }
            else
            {
                o_score += v[j];
                j--;
            }
            flag = !flag;
        }
    }
    cout << s_score << " " << o_score << '
';
    return 0;
}