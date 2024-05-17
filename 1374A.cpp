#include <iostream>

using namespace std;

void solve()
{
    int n, x, y;
    cin >> x >> y >> n;

    int result = n - (n % x) + y;
    if (result > n)
        result -= x;

    cout << result << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
