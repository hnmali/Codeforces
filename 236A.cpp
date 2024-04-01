#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1])
            cnt++;
    }
    if ((cnt & 1) == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
 
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
