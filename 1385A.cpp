//hnmali
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    vector<int> nums(3);;
    for (int i = 0; i < 3; i++)
        cin >> nums[i];
    sort(nums.begin(), nums.end()); 
    if (nums[1] != nums[2])
        cout << "NO\n";
    else {
        cout << "YES\n";
        cout << nums[0] << " " << nums[0] << " "<< nums[2] << "\n";
    }
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
