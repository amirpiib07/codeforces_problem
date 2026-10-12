#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string p;
    cin >> p;
 
    for (char ch : p)
    {
        if (ch == 'H' || ch == 'Q' || ch == '9')
        {
            cout << "YES
";
            return 0;
        }
    }
 
    cout << "NO
";
    return 0;
}