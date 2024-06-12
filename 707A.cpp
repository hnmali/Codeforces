//hnmali
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n,m;
    cin >> n >> m;
    vector<vector<char>> photo(n,vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; j++)
            cin >> photo[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (photo[i][j] == 'C' or 
                photo[i][j] == 'M' or
                photo[i][j] == 'Y') {
                cout << "#Color\n";
                return;
            }
        }
    }
    cout << "#Black&White\n";
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
