#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s, ans;
    cin >> s;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1')
            cnt1++;
        else if (s[i] == '2')
            cnt2++;
        else if (s[i] == '3')
            cnt3++;
    }
    while(cnt1 || cnt2 || cnt3) {
        if (cnt1) { 
            ans.push_back('1');
            cnt1--;
        }
        else if (cnt2) {
            ans.push_back('2');
            cnt2--;
        }
        else if (cnt3) {
            ans.push_back('3');
            cnt3--;
        }
        ans.push_back('+');
    }
    ans.pop_back();
    cout << ans;
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
