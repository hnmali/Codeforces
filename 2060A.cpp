//hnmali
#include <iostream>
#include <vector>
// #include <string>
// #include <map>
// #include <unordered_set>
// #include<stack>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    vector<int> nums(5);
    for(int i = 0; i < 5; i++) {
        if(i == 2) continue;
        cin >> nums[i];
    }
    nums[2] = nums[0]+nums[1];
    int ans1 = 0, ans2 = 0;
    for(int i = 2; i < 5; i++)
        if(nums[i-1]+nums[i-2] == nums[i])
            ans1++;
    nums[2] = nums[3]-nums[1];
    for(int i = 2; i < 5; i++)
        if(nums[i-1]+nums[i-2] == nums[i])
            ans2++;
    ans1 = max(ans1,ans2);
    cout << ans1 << '\n';
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
