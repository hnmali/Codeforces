//hnmali
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    vector<string> s(6);
    for (int i = 0; i < 6; i++)
        cin >> s[i];
    for (int i = 1; i < 6; i++) {
        if (s[i][0] == s[0][0] or s[i][1] == s[0][1]) {
            cout << "YES\n";
            return;
        }
    }   
    cout << "NO\n";
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
