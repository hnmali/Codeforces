#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> homes(3);
    for (int i = 0; i < 3; i++)
        cin >> homes[i];
    int ans = 1000;
    for (int i = 0; i < 3; i++) {
        int temp = 0;
        for (int j = 0; j < 3; j++) {
            temp += abs(homes[j]-homes[i]);
        }
        if (temp < ans)
            ans = temp;
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
