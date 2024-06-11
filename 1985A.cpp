//hnmali
#include <iostream>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    swap(a[0],b[0]);
    cout << a << " " << b << "\n";
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
