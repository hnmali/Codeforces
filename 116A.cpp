#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> tram;
    while (n--) {
        pair<int, int> temp;
        cin >> temp.first >> temp.second;
        tram.push_back(temp);
    }
    int ans = 0, existPassenger = 0;
    for (int i = 0; i < tram.size(); i++) {
        existPassenger = existPassenger - tram[i].first + tram[i].second;
        if (existPassenger > ans)
            ans = existPassenger;
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
