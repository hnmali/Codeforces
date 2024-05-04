#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> burles(n);
    for (int i = 0; i < n; i++) 
        cin >> burles[i];
    int max = -1, ans = 0;
    for (int i = 0; i < n; i++) {
        if (max < burles[i])
            max = burles[i];
    }
    for (int i = 0; i < n; i++) 
        ans = ans + (max - burles[i]);
    cout << ans << "\n";
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
