#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int countM = 0, countC = 0;
    while(n--) {
        int a, b;
        cin >> a >> b;
        if (a > b)
            countM++;
        else if (b > a)
            countC++;
    }
    if (countM == countC)
        cout << "Friendship is magic!^^";
    else if (countM > countC)
        cout << "Mishka";
    else
        cout << "Chris";
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
