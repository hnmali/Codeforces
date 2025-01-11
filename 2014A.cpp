//hnmali
#include <iostream>
#include <vector>
// #include <string>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> gold(n);
    for(int i = 0; i < n; i++)
        cin >> gold[i];
    int cnt = 0, currGold = 0;
    for(int i = 0; i < n; i++) {
        if(gold[i] >= k) 
            currGold += gold[i];
        if(gold[i] == 0 && currGold) {
            cnt++;
            currGold--;
        }
    }
    cout << cnt << '\n';
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
