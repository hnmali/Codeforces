#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < col; j++) 
                cout << "#";
        } 
        else {
            if ((i / 2) % 2 == 0) {
                for (int j = 1; j < col; j++) 
                    cout << ".";
                cout << "#";
            } 
            else {
                cout << "#";
                for (int j = 0; j < col - 1; j++) 
                    cout << ".";
            }
        }
        cout << endl;
    }
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
