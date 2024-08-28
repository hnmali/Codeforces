//hnmali
#include <iostream>
#include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < 2*n; i++) {
        for (int j = 0; j < 2*n; j++) {
            if(((i/2)+(j/2))%2 == 0)
                cout << '#';
            else
                cout << '.';
        }
        cout << "\n";
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
