//hnmali
#include <iostream>
using namespace std;

void solve() {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        if ((n-i) % i == 0)
            ans++;
    }
    cout << ans << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
