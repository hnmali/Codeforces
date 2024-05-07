#include <iostream>
using namespace std;

void solve()
{
    int k;
    cin >> k;
    int i = 1, ans = 1;
    while (i < k) {
        ans++;
        if (ans % 3 == 0 or ans % 10 == 3)
            continue;
        i++;
    }
    cout << ans << "\n";
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);         
    cout.tie(0);
    long long t;
    cin >> t;
    // t = 1;
    while (t--)
        solve();
}
