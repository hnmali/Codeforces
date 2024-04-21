#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> material(8);
    for (int i = 0; i < 8; i++)
        cin >> material[i];
    int drink = (material[1] * material[2])/material[6];
    int limes = (material[3] * material[4]);
    int salt = material[5]/material[7];
    int ans = (min({drink, limes, salt}))/material[0];
    cout << ans;
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
