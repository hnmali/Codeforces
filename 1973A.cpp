//hnmali
#include <iostream>

using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) & 1) {
        cout << -1 << "\n";
        return;
    }
    int ans = 0;
    while(a != 0 || b != 0 || c != 0) {
        if ((a == 0 && b == 0) || (a == 0 && c == 0) || (b == 0 && c == 0))
            break;
        if (a >= b && a >= c && a != 0) {
            a--;
            if (b >= c && b != 0)
                b--;
            else if (c >= b && c != 0)
                c--;
        }
        else if (b >= a && b >= c && b != 0) {
            b--;
            if (a >= c && a != 0)
                a--;
            else if (c >= a && c != 0)
                c--;
        }
        else if (c >= a && c >= b && c != 0) {
            c--;
            if (a >= b && a!= 0)
                a--;
            else if (b >= a && b != 0)
                b--;
        } 
        ans++; 
    }
    cout << ans << "\n";
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
