//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int d1 = abs(a-1);
    int d2 = abs(b-c) + abs(c-1);
    if (d1 < d2)
        cout << "1\n";
    else if (d1 > d2)
        cout << "2\n";
    else
        cout << "3\n";
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
