//hnmali
#include <iostream>
// #include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int ans, row1, row2;
    row1 = row2 = m;
    if(a < row1) {
        ans = a;
        row1 -= a;
    }
    else {
        ans = m;
        row1 = 0;
    }
    if(b < row2) {
        ans += b;
        row2 -= b;
    }
    else {
        ans += m;
        row2 = 0;
    }
    if(c < (row1+row2))
        ans += c;
    else
        ans += row1+row2;
    cout << ans <<'\n';
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
