#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int countA = 0, countD = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A')
            countA++;
        else
            countD++;
    }
    if (countA > countD)
        cout << "Anton";
    else if (countA < countD)
        cout << "Danik";
    else
        cout << "Friendship";
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
