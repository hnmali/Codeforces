//hnmali
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<char> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int st = n, en = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 'B') {
            st = min(st,i+1);
            en = max(en,i+1);
        }
    } 
    cout << en - st + 1<< "\n";  
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
