//hnmali
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, ans = 0;
    cin >> n;
    vector<pair<int,int>> nums(n);
    int tempMax = 0;
    for (int i = 0; i < n; i++) 
        cin >> nums[i].first >> nums[i].second;
    for (int i = 0; i < n; i++) {
        if (nums[i].first <= 10 and nums[i].second > tempMax) {
            ans = i;
            tempMax = nums[i].second;
        }   
    }
    cout << ans+1<< "\n";
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
