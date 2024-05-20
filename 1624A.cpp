//hnmali
#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int max = nums[0], min = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] > max)
            max = nums[i];
        if (nums[i] < min)
            min = nums[i];
    }
    cout << max - min << "\n";
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
    return 0;
}
