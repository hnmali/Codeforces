//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        sum += abs(temp);
    }
    cout << sum << "\n";
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
