//hnmali
#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = 0, cnt0 = 0;
    while(n--) {
        int temp;
        cin >> temp;
        if (temp == 0)
            cnt0++;
        else
            cnt0 = 0;
        ans = max(cnt0,ans);
    }
    cout << ans << "\n";
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
