//hnmali
#include <iostream>

using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a+b >= 10 or a+c >= 10 or b+c >= 10)
        cout << "YES\n";
    else 
        cout << "NO\n";
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
