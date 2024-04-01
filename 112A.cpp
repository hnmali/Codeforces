#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string first, second;
    cin >> first >> second;
    for (int i = 0; i < first.length(); i++)
    {
        char ch1 = tolower(first[i]);
        char ch2 = tolower(second[i]);
 
        if (ch1 < ch2)
        {
            cout << -1;
            return;
        }
        else if (ch1 > ch2)
        {
            cout << 1;
            return;
        }
    }
    cout << 0;
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
