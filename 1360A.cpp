//hnmali
#include <iostream>

using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b;
    c = max(2*a,b);
    d = max(a,2*b);
    cout << min(c,d)*min(c,d) << "\n";
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
