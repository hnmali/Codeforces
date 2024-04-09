#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> color;
    for (int i = 0; i < 4; i++) {
        int temp;
        cin >> temp;
        color.push_back(temp);
    }
    sort(color.begin(), color.end());
    int ans = 0;
    for (int i = 1; i < 4; i++) {
        if (color[i] == color[i-1])
            ans++;
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
