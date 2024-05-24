//hnmali
#include <iostream>
#include<cmath>

using namespace std;

void solve()
{
    int x;
    cin >> x;
    int temp = x, cnt = 0;
    x = x % 10;
    int ans = (x-1)*10;
    if (temp/10 == 0)
        ans += 1;
    else if (temp/100 == 0)
        ans += 3;
    else if (temp/1000 == 0)
        ans += 6;
    else if (temp/10000 == 0)
        ans += 10;
    cout << ans << "\n";
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
