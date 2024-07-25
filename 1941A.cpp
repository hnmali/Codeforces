//hnmali
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int ans = 0;
    vector<int> left(n);
    for (int i = 0; i < n; i++) 
        cin >> left[i];
    int right;
    for (int j = 0; j < m; j++) {
        cin >> right;
        for (int i = 0; i < n; i++) {
            if ((right + left[i]) <= k) 
                ans++;
        }
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
