#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << min(a,b) << " ";
    int temp = max(a,b) - min(a,b);
    if (temp & 1)
        cout << (temp - 1)/2;
    else
        cout << temp/2;
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
