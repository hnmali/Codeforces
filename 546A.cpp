#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, k, w, totalCost = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++) {
        totalCost = (i * k) + totalCost;
    }
    cout << max((totalCost - n), 0);
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
