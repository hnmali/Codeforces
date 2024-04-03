#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t;
    string s;
    cin >> n >> t >> s;
    int i = 0, j = 1;
    while (t--) {
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == 'B' and s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }  
    cout << s;
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
