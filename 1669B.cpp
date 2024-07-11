//hnmali
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
    int n, cnt = 1;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums.begin(),nums.end());
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i-1])
            cnt++;
        else
            cnt = 1;
        if (cnt == 3) {
            cout << nums[i] << "\n";
            return;
        }
    }
    cout << "-1\n";
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
