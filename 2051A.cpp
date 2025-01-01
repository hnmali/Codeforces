//hnmali
#include <iostream>
#include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    if(n == 1) {
        cout << a[0] << "\n";
        return;
    }
    int aSum = 0, bSum = 0;
    for(int i = 0; i < n-1; i++) {
        if(a[i] >= b[i+1]) {
            aSum += a[i];
            bSum += b[i+1];
        }
    }
    aSum += a[n-1];
    cout << aSum - bSum << "\n";
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
