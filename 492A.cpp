//hnmali
#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int height = 0;
    int total_cubes_used = 0;
    int level = 1;
    
    while (true) {
        int cubes_needed_for_level = level * (level + 1) / 2;
        if (total_cubes_used + cubes_needed_for_level > n) {
            break;
        }
        total_cubes_used += cubes_needed_for_level;
        height++;
        level++;
    }
    
    cout << height << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
