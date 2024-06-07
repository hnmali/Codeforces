//hnmali
#include <iostream>
using namespace std;

void solve()
{
    int x,y;
    cin >> x >> y;
    int ans = 1;
    x ^= y;
    while ((ans & x) == 0)
        ans <<= 1;
    cout << ans <<"\n";
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
