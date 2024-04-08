#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str1, str2;
    cin >> str1 >> str2;
    string ans;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == str2[i])
            ans.push_back('0');
        else
            ans.push_back('1');
    }
    cout << ans;
    return;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
}
