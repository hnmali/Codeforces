#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a == b) {
        cout << 0 << endl;
        return;
    }
    int temp = abs(a-b);
    if (temp % 10 != 0)
        ans++;
    ans += temp/10;
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
    // t = 1;
    while (t--)
        solve();
}
