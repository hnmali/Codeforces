#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long ans = 0;
        if (n & 1) 
            ans = -1 * ((n + 1)/2);
        else
            ans = (n/2);
    cout << ans;    
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
}
