//hnmali
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) 
        cin >> nums[i];
    int maxLen = 1, currLen = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i-1])
            currLen++;
        else
            currLen = 1;
        maxLen = max(maxLen,currLen);
    }
    cout << maxLen << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
