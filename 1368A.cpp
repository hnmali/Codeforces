//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int a, b, n, ans = 0;
    cin >> a >> b >> n;
    while (a <= n && b <= n) {
        if (a < b) 
            a += b;
        else 
            b += a;
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
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
