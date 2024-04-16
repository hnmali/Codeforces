#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> event(n);
    for (int i = 0; i < n; i++)
        cin >> event[i];
    int ans = 0, recruit = 0, crime = 0;
    for (int i = 0; i < n; i++) {
        if (event[i] == -1 && recruit == 0)
            ans++;
        else if (recruit != 0 && event[i] == -1)
            recruit--;
        else
            recruit += event[i];
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
