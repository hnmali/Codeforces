#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    if ((a * 2) < b) {
        cout << n * a << endl;
    }
    else {
    ans = (n / 2) * b;
    if (n & 1)
        ans += a;
    cout << ans << endl;
    }
    return;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    // t = 1;
    while (t--)
        solve();
}
