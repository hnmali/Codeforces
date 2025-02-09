//hnmali
#include <iostream>
// #include <vector>
// #include <string>
// #include <map>
// #include <unordered_set>
// #include<stack>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    string s;
    cin >> s;
    s.pop_back();
    s.pop_back();
    s.push_back('i');
    cout << s << '\n';
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
