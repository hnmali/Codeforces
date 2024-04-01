#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n;
    cin >> n;
    int countLucky = 0;
    while (n) {
        int rem = n % 10;
        if (rem == 7 || rem == 4)
            countLucky++;
        n /= 10;
    }
    if (countLucky == 7 || countLucky == 4)
        cout << "YES";
    else
        cout << "NO";
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
