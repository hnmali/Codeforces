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
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int curr = 0, ans = 0;
    curr = d1 + d2 + d3;
    ans = curr;
    curr = d1+d1+d2+d2;
    ans = min(curr, ans);
    curr = d1+d3+d3+d1;
    ans = min(curr,ans);
    curr = d2+d3+d3+d2;
    ans = min(curr,ans);
    cout << ans << '\n';
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
