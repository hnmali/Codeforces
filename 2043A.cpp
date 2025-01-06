//hnmali
#include <iostream>
// #include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long cnt = 1;
    while(n > 3) {
        cnt *= 2;
        n /= 4;
    }
    cout << cnt << "\n";
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
