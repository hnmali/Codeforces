//hnmali
#include <iostream>

using namespace std;

bool prime (int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int x, y;
    cin >> x >> y;
    if (y % x == 0) {
        cout << "NO\n";
        return;
    }
    for (int i = x+1; i <= y; i++) {
        if (prime(i)) {
            if (i == y) {
                cout << "YES\n";
                return;
            }
            else {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "NO\n";
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
