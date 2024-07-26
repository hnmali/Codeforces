//hnmali
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int sum = 0, cntOdd = 0, cntEven = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (nums[i]&1)
            cntOdd++;
        else
            cntEven++;
    }
    if ((sum&1) or (cntOdd and cntEven))
        cout << "YES\n";
    else
        cout << "NO\n";
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
