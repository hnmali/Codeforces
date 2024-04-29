#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,temp;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i-1] and nums[i] == nums[i+1]) {
            cout << i << endl;
            return;
        }
        else if (nums[i] != nums[i-1] and nums[i] != nums[i+1]) {
            cout << i+1 << endl;
            return;
        }

    }
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
        solve();
}
