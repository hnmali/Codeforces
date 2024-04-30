#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string code;
    cin >> code;
    int i = 0;
    string ans = "";
    while (i < code.length()) {
        if (code[i] == '.') {
            ans.push_back('0');
            i++;
        }
        else if (code[i] == '-') {
            if (code[i+1] == '-') 
                ans.push_back('2');
            else
                ans.push_back('1');
            i +=2;
        }
    }
    cout << ans;
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
