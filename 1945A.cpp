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
    long long a, b, c;
    cin >> a >> b >> c;
    long long temp = (3 - b % 3) % 3;
    if (b > 0 && temp > c) {
        cout << "-1\n";
        return;
    }
    c -= temp;
    b += temp;
    long long ans = a + c / 3 + (c % 3 + 1) / 2 + b / 3;
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
