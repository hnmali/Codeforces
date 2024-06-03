//hnmali
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n,f,k;
    cin >> n >> f >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    f = nums[f-1];
    sort(nums.begin(),nums.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] == f)
            cnt++;
    int orgCnt = cnt;
    for (int i = n-1; i >= n-k; i--) {
        if (nums[i] == f)
            cnt--;
    }
    if (cnt <= 0)
        cout << "YES\n";
    else if (cnt == orgCnt)
        cout << "NO\n";
    else
        cout << "Maybe\n";
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
