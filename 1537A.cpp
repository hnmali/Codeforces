//hnmali
#include <iostream>
// #include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
using namespace std;

void solve() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    if (sum == n)
        cout << "0\n";
    else if (sum < n)
        cout << "1\n";
    else
        cout << sum - n << "\n";
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
