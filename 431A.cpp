//hnmali
#include <iostream>
#include<vector>

using namespace std;

void solve()
{
    vector<int> nums(4);
    for (int i = 0; i < 4; i++)
        cin >> nums[i];
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        ans += nums[s[i]-'0'-1];
    }
    cout << ans;
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
    return 0;
}
