//hnmali
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    while (n > 1) {
        if (n <= k) {
            ans += 1;
            n = 1;
        } else {
            ans += 1;
            n = n - k + 1;
        }
    }
    cout << ans << endl;
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
