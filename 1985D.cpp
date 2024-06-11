//hnmali
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n,vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    }
    int col = 0, row = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '#') {
                col = j+1;
                break;
            }
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (grid[i][j] == '#') {
                row = i+1;
                break;
            }
        }
    }
    cout << row << " " << col << "\n"; 
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
