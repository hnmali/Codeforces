//hnmali
#include <iostream>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    char st = s[0], en = s[n-1];
    int i = 0, j = n-1;
    while (s[i] != s[j] and n > 0) {
        i++;
        j--;
        n -= 2;
    }
    cout << n << "\n";
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
