//hnmali
#include <iostream>
// #include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
using namespace std;

void solve() {
    string pi = "314159265358979323846264338327", s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < 30; i++) {
        if (s[i] != pi[i])
            break;
        ans++;
    }
    cout << ans << "\n";
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
