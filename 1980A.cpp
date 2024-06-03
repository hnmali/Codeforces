//hnmali
#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, m, ans = 0;
    string s;
    cin >> n >> m >> s;
    vector<int> cnt(7,0);
    for(int i = 0; i < n; i++) 
        cnt[s[i]-'A']++;
    for (int i = 0; i < 7; i++) {
        if (cnt[i] < m)
            ans += m - cnt[i];
    }
    cout << ans <<"\n";
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
