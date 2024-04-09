#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (i == n)
            cout << "I " << (i & 1 ? "hate " : "love ") << "it";
        else
        {
            if (i & 1)
                cout << "I hate that ";
            else
                cout << "I love that ";
        }
        i++;
    }
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
