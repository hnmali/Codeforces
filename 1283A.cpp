//hnmali
#include <iostream>
using namespace std;

void solve()
{
    int h, m, ans = 0;
    cin >> h >> m;
    ans = (23-h)*60;
    ans += 60 - m;
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
