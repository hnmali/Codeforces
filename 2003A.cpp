//hnmali
#include <iostream>
// #include <vector>
// #include <unordered_set>
// #include <algorithm>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;  
    if (s[0] != s[n - 1])
            cout << "YES" << endl;
    else
            cout << "NO" << endl;
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
