//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int pile1 = 1<<n, pile2 = 0;
    for (int i = 1; i < n/2; i++)
        pile1 += (1<<i);
    for (int i = n/2; i < n; i++)
        pile2 += (1<<i);
    cout << pile1 - pile2 << "\n";
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
