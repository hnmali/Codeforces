//hnmali
#include <iostream>
// #include <vector>
// #include <string>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int x = 0, i = 1;
    bool turn = true;
    while (abs(x) <= n) {
        if(turn)
            x += 2*i-1;
        else
            x -= 2*i-1;
        turn = !turn;
        i++;
    }
    if(!turn)
        cout << "Sakurako\n";
    else
        cout << "Kosuke\n";
    return;
}

int main() {
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
