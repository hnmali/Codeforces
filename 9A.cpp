//hnmali
#include <iostream>
using namespace std;

void solve()
{
    int w, y;
    cin >> y >> w;
    int n = 7 - max(w,y);
    if (n == 6)
        cout << "1/1";
    else if (n == 5)
        cout << "5/6";
    else if (n == 4)
        cout << "2/3";
    else if (n == 3)
        cout << "1/2";
    else if (n == 2)
        cout << "1/3";
    else if (n == 1)
        cout << "1/6";
    else if (n == 0)
        cout << "0/1";
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
    return 0;
}
