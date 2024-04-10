#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, p, q;
    vector<int> xy;
    cin >> n >> p;
    for (int i = 0; i < p; i++) {
        int temp;
        cin >> temp;
        xy.push_back(temp);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int temp;
        cin >> temp;
        xy.push_back(temp);
    }
    sort(xy.begin(), xy.end());
    if (xy.empty()) {
        cout << "Oh, my keyboard!";
            return;
    }
    int j = 2;
    if (xy[0] != 1) {
        cout << "Oh, my keyboard!";
        return;
    }
    for (int i = 1; i < xy.size(); i++) {
        if (xy[i] == xy[i - 1])
            continue;
        if (xy[i] != j) {
            cout << "Oh, my keyboard!";
            return;
        }
        else
            j++;
    }
    if ((j - 1) != n) {
        cout << "Oh, my keyboard!";
            return;
    }
    cout << "I become the guy.";
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
