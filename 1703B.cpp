//hnmali
#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    string problem;
    cin >> n >> problem;
    int ans = 0;
    vector<int> cnt(26);
    for (int i = 0; i < n; i++) 
        cnt[problem[i] - 'A']++;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0)
            ans += cnt[i]+1;
    }
    cout << ans << "\n"; 
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
