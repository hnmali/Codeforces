//hnmali
#include <iostream>
// #include <vector>
// #include <string>
// #include <map>
// #include <unordered_set>
// #include<stack>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    int prev = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
      int a; cin >> a;
      ans = max(ans, a - prev);
      prev = a;
    }
    ans = max(ans, 2 * (x - prev));
    cout << ans << '\n';
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
