#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s, ans;
    cin >> s;
    if (s[0] >= 'A' && s[0] <= 'Z')
        cout << s;
    else {
        s[0] -= 32;
        cout << s;
    }
 
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
