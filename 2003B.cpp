//hnmali
#include <iostream>
#include <vector>
// #include <map>
// #include <unordered_set>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums.begin(),nums.end());
    int temp = n/2 - 1;
    if (n&1) 
        cout << nums[n/2] << "\n";
    else
        cout << nums[n-temp-1] << "\n";
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
