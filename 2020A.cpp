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
    int n, k;
    cin >> n >> k;
    if(k == 1) {
        cout << n << '\n';
        return;
    }
    int ans = 0;
    while(n) {
        ans += n % k;
        n /= k;
    }
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
