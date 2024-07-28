//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    if (n == 1)
        cout << "0\n";
    else
        cout << min(2,n-1) * m << "\n";
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
