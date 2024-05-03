#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string ticket;
    cin >> ticket;
    int sum1 = ticket[0] + ticket[1] + ticket[2];
    int sum2 = ticket[3] + ticket[4] + ticket[5];
    if (sum1 == sum2)
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
    while (t--)
        solve();
}
