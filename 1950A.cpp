#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c) 
        cout << "STAIR" << endl;
    else if (a < b && b > c)
        cout << "PEAK" << endl;
    else
        cout << "NONE" << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
}
