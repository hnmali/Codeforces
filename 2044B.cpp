//hnmali
#include <iostream>
// #include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    string a, b;
    cin >> a;
    for(int i = a.length()-1; i >= 0; i--) {
        if(a[i] == 'w')
            b.push_back('w');
        else if (a[i] == 'p')
            b.push_back('q');
        else
            b.push_back('p');
    }
    cout << b << "\n";
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
