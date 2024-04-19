#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, r;
    cin >> k >> r;
    int ans = 1;
    while ((k * ans)%10 != 0 && (k * ans) % 10 != r)
        ans++;
    cout << ans;
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
}
