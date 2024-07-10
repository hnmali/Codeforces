//hnmali
#include <iostream>
using namespace std;

void solve() {
    int n, w, h;
    cin >> w >> h >> n;
    int cnt = 1;
    while (cnt < n) {
        if (w&1 and h&1) {
            cout << "NO\n";
            return;
        }
        else if (w&1)
            h /= 2;
        else
            w /= 2;
        cnt *= 2;
    } 
    cout << "YES\n";    
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
