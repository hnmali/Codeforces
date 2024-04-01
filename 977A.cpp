#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, k;
    cin >> n >> k;
    while (k--) {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }
    cout << n;
    return;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
