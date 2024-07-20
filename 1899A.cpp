//hnmali
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int rem = n % 3;
    if (rem) 
        cout << "First\n";
    else
        cout << "Second\n";
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
