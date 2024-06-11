//hnmali
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> nums(n);
    for (long long i = 0; i < n; ++i) 
        cin >> nums[i];
    long long maxm = 0, sum = 0, ans = 0;
    for (long long i = 0; i < n; i++) {
        maxm = max(maxm,nums[i]);
        sum += nums[i];
        if (2 * maxm == sum)
            ans++;       
    }
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
