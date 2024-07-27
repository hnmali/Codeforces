//hnmali
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    vector<int> cnt(3);
    for (int i = 0; i < 9; i++) {
        char temp;
        cin >> temp;
        if (temp == '?')
            continue;
        cnt[temp-'A']++;
    }
    for (int i = 0; i < 3; i++) {
        if (cnt[i] < 3) {
            cout << char('A' + i) << "\n";
            return;
        }
    }
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
