#include <iostream>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    char mx = s[0];
    for (int i = 1; i < n; i++)
        mx = max(s[i],mx);
    cout << mx - 'a' + 1<< "\n";
    return;  
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
