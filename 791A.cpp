#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int a, b, ans = 0;
    cin >> a >> b;
    while (a <= b) {
        a *= 3;
        b *= 2;
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
