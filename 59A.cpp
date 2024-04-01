#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s;
    cin >> s;
    int countCaps = 0, countSmall = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            countCaps++;
        else
            countSmall++;
    }
    if (countCaps > countSmall) {
        for (int i = 0; i < s.length(); i++)
            s[i] = toupper(s[i]);
        cout << s;
    }
    else {
        for (int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        cout << s;
    }
    return;
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
