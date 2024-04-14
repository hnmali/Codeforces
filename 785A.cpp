#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> polygons(n);
    for (int i = 0; i < n; i++) {
        cin >> polygons[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (polygons[i] == "Tetrahedron")
            ans += 4;
        else if (polygons[i] == "Cube")
            ans += 6;
        else if (polygons[i] == "Octahedron")
            ans += 8;
        else if (polygons[i] == "Dodecahedron")
            ans += 12;
        else if (polygons[i] == "Icosahedron")
            ans += 20;
    }
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
