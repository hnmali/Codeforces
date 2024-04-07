#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> drinks;
    double totalPortion = n;
    while (n--) {
        int temp;
        cin >> temp;
        drinks.push_back(temp);
    }
    double orange = 0;
    for (int i = 0; i < drinks.size(); i++) 
        orange += drinks[i];
    cout << (double)(orange / totalPortion);
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
