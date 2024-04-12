#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, l, m, n, d;
    int cont = 0;
    
    cin >> k >> l >> m >> n >> d;
    cont = d;
    
    if(k == 1 || l == 1 || m == 1 || n == 1)
        cout << d << endl;
    else
    {
        for(int i = 1; i <= d; i++)
        {
            if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                cont--;
        }
        cout << cont << endl;
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
