#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> colors(n);
    for (int i = 0; i < n; i++) {
        cin >> colors[i].first >> colors[i].second;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && colors[i].first == colors[j].second)
                ans++;
        }
    }
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
