#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (1900 <= n)
        cout << "Division 1\n";
    else if (1600 <= n && n <= 1899)
        cout << "Division 2\n";
    else if (1400 <= n && n <= 1599)
        cout << "Division 3\n";
    else if (n <= 1399)
        cout << "Division 4\n";    
    return;  
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    // t = 1;
    while (t--)
        solve();
}
