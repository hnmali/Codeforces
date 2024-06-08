//hnmali
#include <iostream>
using namespace std;

void solve()
{
    int l , r;
    cin >> l >> r;
    int ans = 0;
    while (r) {
        r /= 2;
        ans++;
    }
    ans--;
    cout << ans << "\n";
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
