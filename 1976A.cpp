//hnmali
#include <iostream>

using namespace std;

void solve()
{
    int n;
    string pass;
    cin >> n >> pass;
    bool numEnd = false;
    for (int i = 0; i < n-1; i++) {
        if (pass[i] > pass[i+1]) {
            cout << "NO\n";
            return;
        }
        if (pass[i] >= 'a' and pass[i] <= 'z') {
            numEnd = true;
        }
        else {
            if (numEnd) {
                cout << "NO\n";
                return;
            }
        }
    }
    if (pass[n-2] > pass[n-1])
        cout << "NO\n";
    else
        cout << "YES\n";
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
