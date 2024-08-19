//hnmali
#include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if(c%2 == 0) {
        if (a > b)
            cout << ("First\n");
        else
            cout << ("Second\n");
    }
    else {
        if (b > a)
            cout << ("Second\n");
        else
            cout << ("First\n");
    }
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
