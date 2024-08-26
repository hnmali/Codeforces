//hnmali
#include <iostream>
#include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
using namespace std;

void solve() {
    long long n, x;
    cin >> n >> x;
    vector<pair<char,long long>> iceCream(n);
    for (long long i = 0; i < n; i++)
        cin >> iceCream[i].first >> iceCream[i].second;
    long long diss = 0;
    for (long long i = 0; i < n; i++) {
        if (iceCream[i].first == '+')
            x += iceCream[i].second;
        else {
            if (x < iceCream[i].second)
                diss++;
            else
                x -= iceCream[i].second;
        }
    }
    cout << x << " " << diss << "\n";
    return;
}

int main() {
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
