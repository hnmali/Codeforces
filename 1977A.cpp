//hnmali
#include <iostream>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n < m) {
        cout << "NO\n";
        return;
    }
    if ((n-m)%2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
