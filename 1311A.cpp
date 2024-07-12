//hnmali
#include <iostream>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "0\n";
        return;
    }
    int temp = b - a;
    if (temp > 0 and temp & 1)
        cout << "1\n";
    else if (temp < 0 and ((temp % 2) == 0))
        cout << "1\n";
    else
        cout << "2\n";
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
