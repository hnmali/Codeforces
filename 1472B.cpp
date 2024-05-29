//hnmali
#include <iostream>

using namespace std;

void solve()
{
    int n, cnt1 = 0, cnt2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == 1)
            cnt1++;
        else
            cnt2++;
    }
    if ((cnt1 % 2 == 0) && (cnt2 % 2 == 0))
        cout << "YES\n";
    else if (cnt1 != 0 && cnt2 != 0 && ((cnt1+cnt2*2)%2 == 0))
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
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
