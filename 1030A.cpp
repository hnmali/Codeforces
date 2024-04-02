#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> opinion;
    while (n--) {
        int temp;
        cin >> temp;
        opinion.push_back(temp);
    }
    for (int i = 0; i < opinion.size(); i++) {
        if (opinion[i] == 1) {
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
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
