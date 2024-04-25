#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if(s.length() != 3) {
        cout << "NO" << endl;
        return;
    }

    if (s[0] == 'Y' or s[0] == 'y') {
        if (s[1] == 'e' or s[1] == 'E') {
            if (s[2] == 's' or s[2] == 'S')
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    // t = 1;
    while (t--)
        solve();
}
