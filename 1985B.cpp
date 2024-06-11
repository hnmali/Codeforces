//hnmali
#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 3)
        cout << 3 << "\n";
    else
        cout << 2 << "\n";
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
