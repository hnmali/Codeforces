//hnmali
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    n /= 2;
    if (n & 1) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int i = 1; i <= n; i++) 
        cout << i * 2 << " ";
    for (int i = 1; i < n; i++) 
        cout << i * 2 - 1 << " ";
    cout << 3 * n - 1 << "\n";
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
