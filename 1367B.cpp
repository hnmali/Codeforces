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
    int cntE = 0, cntO = 0;
    for (int i = 0; i < n; i++) {
        if ((i&1) && !(nums[i]&1))
            cntO++;
        else if (!(i&1) && (nums[i]&1))
            cntE++;
    }
    (cntE == cntO) ? (cout << cntE << "\n") : (cout << "-1\n");
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
