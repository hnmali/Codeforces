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
    string a;
    cin >> a;
    if(a.size() <= 2)
        cout << "NO\n";
    else if(a[0] != '1' || a[1] != '0' || a[2] == '0')
        cout << "NO\n";
    else if(a.size() == 3 && a[2] == '1')
        cout << "NO\n";
    else
        cout << "YES\n";
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
