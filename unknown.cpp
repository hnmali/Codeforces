#include <bits/stdc++.h>
using namespace std;

int check(char a, string b, int k) {
    for (int i = k; i < b.length(); i++) {
        if (b[i] == a) 
            return i;
    }
    return -1;
} 
void solve()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int ans = 0, lastIndex = -1;
    for (int i = 0; i < a.length(); i++) {
        lastIndex = check(a[i],b,lastIndex+1);
        if(lastIndex == -1) {
            break;
        }
        ans++;
    }
    cout << ans <<"\n";
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
