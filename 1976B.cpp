//hnmali
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void solve()
{
    long long n, ans = 1;
    cin >> n;
    vector<long long> a(n), b(n+1);
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    for (long long i = 0; i <= n; i++)
        cin >> b[i];
    bool flag = true;
    long long currDiff = INT_MAX;
    for (long long i = 0; i < n; i++) {
        if (flag and (b[n] >= min(a[i],b[i]) and b[n] <= max(a[i],b[i])))
            flag = false;
        else if (flag)
            currDiff = min(currDiff,{min(abs(a[i]-b[n]),abs(b[i]-b[n]))});
        ans += abs(a[i]-b[i]);
    }
    if (flag)
        ans += currDiff;
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
