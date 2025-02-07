//hnmali
#include <iostream>
#include <vector>
// #include <string>
// #include <map>
// #include <unordered_set>
// #include<stack>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0, curr = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'x')
            curr++;
        else
            curr = 0;
        if(curr == 3) {
            ans++;
            curr--;
        }
    }
    cout << ans << '\n';
    return;
}

int main() {
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
