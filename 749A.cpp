//hnmali
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n&1) {
        cout << n/2 << "\n";
        cout << "3 ";
        n -= 3;
        while (n) {
            cout << "2 ";
            n -= 2;
        }
    }
    else {
        cout << n/2 << "\n";
        while(n) {
            cout << "2 ";
            n -= 2;
        }
    }
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
