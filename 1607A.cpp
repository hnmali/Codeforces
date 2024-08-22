//hnmali
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    vector<int> pos(26);
    string keyboard, s;
    cin >> keyboard >> s;
    for (int i = 0; i < 26; i++)
        pos[keyboard[i]-'a'] = i;
    int ans = 0;
    for (int i = 1; i < s.length(); i++) 
        ans += abs(pos[s[i]-'a'] - pos[s[i-1]-'a']);
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
