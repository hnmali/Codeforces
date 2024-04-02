#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h;
    cin >> n >> h;
    vector<int> height;
    while (n--) {
        int temp; 
        cin >> temp;
        height.push_back(temp);
    }
    int ans = 0;
    for (int i = 0; i < height.size(); i++) {
        if (height[i] <= h)
            ans++;
        else
            ans += 2;
    }
    cout << ans;
    return;
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
