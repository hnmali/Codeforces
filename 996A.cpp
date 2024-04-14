#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    ans = n/100;
    n %= 100;
    ans += n/20;
    n %= 20;
    ans += n/10;
    n %= 10;
    ans += n/5;
    n %= 5;
    ans += n;
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
