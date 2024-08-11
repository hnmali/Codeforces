//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    float diff = max(a,b) - min(a,b);
    diff /= 2;
    diff /= c;
    int ans = diff;
    if (ans != diff)
        ans++;
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
