#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> nums(3);
    for (int i = 0; i < 3; i++) 
        cin >> nums[i];
    sort(nums.begin(),nums.end());
    if ((nums[0] + nums[1]) == nums[2])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    // t = 1;
    while (t--)
        solve();
}
