#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> gifts;
    vector<int> ans(n);
    while (n--) {
        int temp;
        cin >> temp;
        gifts.push_back(temp);
    }
    int count = 1;
    for (int i = 0; i < gifts.size(); i++, count++) {
        ans[gifts[i] - 1] = i + 1;
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
}
