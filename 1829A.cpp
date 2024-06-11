//hnmali
#include <iostream>
using namespace std;

void solve()
{
    string in;
    cin >> in;
    string match = "codeforces";
    int ans = 0;
    for (int i = 0; i < 10; i++) {
        if (in[i] != match[i])
            ans++;
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
