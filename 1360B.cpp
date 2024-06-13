//hnmali
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums.begin(),nums.end());
    int ans = 10001;
    for (int i = n-1; i > 0; i--) 
        ans = min(ans,(nums[i]-nums[i-1]));
    cout << ans <<"\n";
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
