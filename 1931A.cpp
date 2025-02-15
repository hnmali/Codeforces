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
    int n;
    cin >> n;
    string s = "zzz", curr = "";
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < 26; j++) {
            for(int k = 0; k < 26; k++)
                if(i+j+k+3 == n) {
                    curr += char(i+'a');
                    curr += char(j+'a');    
                    curr += char(k+'a');
                    s = min(curr, s);
                }
        }
    }
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
