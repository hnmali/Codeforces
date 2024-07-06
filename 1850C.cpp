//hnmali
#include <iostream>
#include <vector>
using namespace std;

void findString(int a, int b, string& ans, vector<vector<char>>& grid) {
    for (int i = a; i < 8; i++) {
        if (grid[i][b] == '.')
            break;
        else
            ans.push_back(grid[i][b]);
    }
}

void solve() {
    vector<vector<char>> grid(8, vector<char>(8));
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
            cin >> grid[i][j];
    }
    string ans;
    for (int i = 0; i < 8; i++) {
        bool flag = false;
        for (int j = 0; j < 8; j++) {
            if (grid[i][j] != '.') {
                findString(i, j, ans, grid);
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
