#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sereja = 0, dima = 0;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++)
        cin >> cards[i];
    int i = 0, j = n - 1;
    for (int k = 0; k < n; k++) {
        if (k%2 == 0) {
            if (cards[i] > cards[j]) {
                sereja += cards[i];
                i++;
            }
            else {
                sereja += cards[j];
                j--;
            }
        }
        else {
            if (cards[i] > cards[j]) {
                dima += cards[i];
                i++;
            }
            else {
                dima += cards[j];
                j--;
            }
        }
    }
    cout << sereja << " " << dima << endl;
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
}
