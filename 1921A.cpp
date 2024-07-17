//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    int minm = min(x1,{min(x2,{min(x3,x4)})});
    int maxm = max(x1,{max(x2,{max(x3,x4)})});
    cout << (maxm-minm) * (maxm-minm) << "\n";
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
