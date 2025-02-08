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
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int,int>> nums(n);
    for(int i = 0; i < n; i++) 
        cin >> nums[i].first >> nums[i].second;
    if(nums[0].first >= s)
        cout << "YES\n";
    else if((m-nums[n-1].second) >= s)
        cout << "YES\n";
    else {
        for(int i = 1; i < n; i++) {
            if((nums[i].first-nums[i-1].second) >= s) {
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
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
