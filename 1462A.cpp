//hnmali
#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    int s = 1, e = 2, ans = 1;
    while(1) {
        if (s <= n and e >= n) {
            cout << ans << "\n";
            return;
        }
        else {
            s = e+1;
            e = e+x;
            ans++;
        }
    }
    return;
}

int main()
{
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
