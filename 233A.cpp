//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n&1) {
        cout << "-1\n";
        return;
    }
    int k = 1, l = 2;
    for (int i = 0; i < n; i++) {
        if (i&1) {
            cout << k << " ";
            k += 2;
        }
        else {
            cout << l << " ";
            l += 2;
        }
    }
    cout << "\n";
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
