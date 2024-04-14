#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (s[i] != s[i - 1])
                ans++;
        }
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
}
