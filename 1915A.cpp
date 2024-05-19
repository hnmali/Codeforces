//hnmali
#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a^b^c) << "\n";
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
    return 0;
}
