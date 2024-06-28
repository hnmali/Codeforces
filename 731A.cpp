//hnmali
#include <iostream>
using namespace std;
    
void solve() {
    string s;
    cin >> s;
    int ans = 0;
    char curr = 'a';
    for (int i = 0; i < s.length(); i++) {
        ans = ans + min(abs(curr-s[i]),26-abs(curr-s[i]));
        curr = s[i];
    }
    cout << ans << "\n";
    return;
}

int main()
{
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
