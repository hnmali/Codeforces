#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if (b > a)
        ans++;
    if (c > a)
        ans++;
    if (d > a)
        ans++;
    cout << ans << endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
        solve();
}
