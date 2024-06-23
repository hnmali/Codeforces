//hnmali
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    vector<int> nums(3);;
    for (int i = 0; i < 3; i++)
        cin >> nums[i];
    int ans = 0;
    sort(nums.begin(),nums.end());
    ans = abs(nums[0]-nums[1]) + abs(nums[2]-nums[1]);
    cout << ans << "\n";    
    return; 
}

int main()
{
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
