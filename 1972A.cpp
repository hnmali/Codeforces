#include <bits/stdc++.h>
using namespace std;

void shift(vector<int>& a, int k) {
    for (int i = a.size()-1; i > k; i--) {
        a[i] = a[i-1];
    }
    return;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int w = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            shift(a,i);
            w++;
            a[i] = b[i];
        }
    }
    cout << w << endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
        solve();
}
