//hnmali
#include <iostream>
// #include <vector>
// #include <string>
// #include <map>
#include <unordered_set>
// #include<stack>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    unordered_set<int> a, b;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.insert(temp);
    }
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        b.insert(temp);
    }
    if(a.size() == 1 && b.size() == 1)
        cout << "NO\n";
    else if(a.size() == 1 && b.size() < 3)
        cout << "NO\n";
    else if(b.size() == 1 && a.size() < 3)
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
