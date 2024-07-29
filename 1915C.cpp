//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

bool perfectSquare(long long n) {
    for (long long i = 1; i*i <= n; i++) {
        if (i*i == n)
            return true;
    }
    return false;
}

void solve() {
    long long n, sum = 0;
    cin >> n;
    while (n--) {
        long long temp;
        cin >> temp;
        sum += temp;
    }
    if (perfectSquare(sum))
        cout << "YES\n";
    else
        cout << "NO\n";
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
