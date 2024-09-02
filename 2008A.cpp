//hnmali
#include <iostream>
#include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a%2 != 0)
        cout << "NO\n";
    else {
        if (b%2==0)
            cout << "YES\n";
        else {
            if (a==0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }


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
