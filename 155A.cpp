#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> points(n);
    for (int i = 0; i < n; i++) 
        cin >> points[i];
    int ans = 0, max = points[0], min = points[0];
    for (int i = 1; i < n; i++) {
        if (points[i] < min) {
            min = points[i];
            ans++;
        }
        else if (points[i] > max) {
            max = points[i];
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
