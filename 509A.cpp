//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

int ans (int row, int col) {
    if (row == 1 or col == 1)
        return 1;
    return ans(row-1, col) + ans (row, col-1);
}
void solve() {
    int n;
    cin >> n;
    cout << ans(n,n) << "\n";
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
