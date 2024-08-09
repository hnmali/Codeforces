//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int cntA = 0, cntB = 0, cntC = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A')
            cntA++;
        else if (s[i] == 'B')
            cntB++;
        else
            cntC++;
    }
    if (cntA+cntC == cntB)
        cout << "YES\n";
    else
        cout << "NO\n";
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
