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
    int n, m;
    cin >> n >> m;
    int l = m, b = m;
    int temp;
    cin >> temp;
    cin >> temp;
    n--;
    while(n--) {
        int tempL, tempB;
        cin >> tempL >> tempB;
        l += tempL;
        b += tempB; 
    }
    cout << 2*(l+b) << '\n';
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
