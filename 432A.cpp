#include <iostream>
#include<vector>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (cnt == 3) {
            cnt = 0;
            ans++;
        }
        if (k + nums[i] <= 5)
            cnt++;
    }
    if (cnt == 3)
        ans++;
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
