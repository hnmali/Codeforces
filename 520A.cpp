#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 26) {
        cout << "NO";
        return;
    }
    sort(s.begin(), s.end());
    int i = 0;
    while (s[i] >= 'A' && s[i] <= 'Z' ) {
        s[i] = s[i] + 32;
        i++;
    }
    sort(s.begin(), s.end());
    char ch = 'b';
    if (s[0] != 'a' || s[n - 1] != 'z') {
        cout << "NO";
        return;
    }
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i- 1])
            continue;
        if (s[i] != ch) {
            cout << "NO";
            return;
        }
        else 
            ch++;
    }
    cout << "YES";
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
