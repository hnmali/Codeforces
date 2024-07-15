//hnmali
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    vector<int> nums(4);
    for (int i = 0; i < 4; i++)
        cin >> nums[i];
    sort(nums.begin(),nums.end());
    cout << nums[3]-nums[0] << " ";
    cout << nums[3]-nums[1] << " ";
    cout << nums[3]-nums[2] << "\n";
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
