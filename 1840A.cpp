//hnmali
#include <iostream>
// #include <vector>
#include <string>
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
    for(int i = 0; i < s.size(); i++) {
        for(int j = i+1; j < s.size(); j++) {
            if(s[i] == s[j]) {
                cout << s[i];
                i = j;
                break;
            }
        }
    }
    cout << '\n';
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
