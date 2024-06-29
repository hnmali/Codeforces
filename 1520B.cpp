//hnmali
#include <iostream>
using namespace std;
    
void solve() {
    int n;
    cin >> n;
    if (n < 10) {
        cout << n << "\n";
        return;
    }
    int ans = 0;
    for (int digit = 1; digit <= 9; ++digit) {
        long long ordinaryNumber = digit;
        while (ordinaryNumber <= n) {
            ++ans;
            ordinaryNumber = ordinaryNumber * 10 + digit;
        }
    }
    cout << ans << "\n";
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
