#include <bits/stdc++.h>
using namespace std;

int time(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++) 
        ans += 5*i;
    return ans;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int s = 0, e = n;
    int ans = 0;
    while (s <= e) {
        int mid = (s+e) >> 1;
        if (time(mid) + k == 240) {
            cout << mid;
            return;
        }
        else if (time(mid) + k < 240) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
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
