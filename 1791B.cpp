//hnmali
#include <iostream>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L')
            x--;
        else if (s[i] == 'R')
            x++;
        else if (s[i] == 'U')
            y++;
        else
            y--;
        if (x == 1 and y == 1) {
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
