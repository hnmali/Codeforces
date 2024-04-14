#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string guest, host, pile;
    cin >> guest >> host >> pile;
    vector<int> count(26,0);
    for (int i = 0; i < guest.length(); i++) {
        count[guest[i] - 'A']++;
    }
    for (int i = 0; i < host.length(); i++) {
        count[host[i] - 'A']++;
    }
    for (int i = 0; i < pile.length(); i++) {
        count[pile[i] - 'A']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            cout << "NO";
            return;
        }
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
