#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int ans = 0, n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1])
            ans++;
    }
    cout << ans;
 
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
