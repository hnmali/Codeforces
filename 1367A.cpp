#include <iostream>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.length() == 2) {
        cout << s << "\n";
        return;
    }
    string ans;
    ans.push_back(s[0]);
    for (int i = 1; i < s.length(); i+=2) {
        ans.push_back(s[i]);
    }
    if (s.length()&1)
        ans.push_back(s[s.length()-1]);
    cout << ans << "\n";
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

    return 0;
}
