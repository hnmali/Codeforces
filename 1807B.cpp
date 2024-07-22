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
    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i]&1)
            sumOdd += nums[i];
        else
            sumEven += nums[i];
    }
    if (sumEven > sumOdd)
        cout << "YES\n";
    else
        cout << "NO\n";
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
