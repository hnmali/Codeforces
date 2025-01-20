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
    int n, k, x;
    cin >> n >> k >> x;
    if(x != 1) {
        cout << "YES\n" << n << '\n';
        while(n--)
            cout << "1 ";
        cout << "\n";
    }
    else if (k == 1) 
        cout << "NO\n";
    else if(k == 2 && !(n&1)) {
        cout << "YES\n" << n/2 <<'\n';
        n /= 2;
        while(n--)
            cout << "2 ";
        cout << '\n';
    }
    else {
        cout << "YES\n" << n/2 << '\n';
        if(n&1) 
            cout << "3 ";
        else
            cout << "2 ";
        for(int i = 0; i < n/2-1; i++)
            cout << "2 ";
        cout << '\n';
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
