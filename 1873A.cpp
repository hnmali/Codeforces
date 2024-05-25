//hnmali
#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    if (s[0] != 'a')
        cnt++;
    if (s[1] != 'b')
        cnt++;
    if (s[2] != 'c')
        cnt++;
    if (cnt <= 2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
