//hnmali
#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    vector<int> ans(n);
    int i = 0, j = n-1, k = 0;
    while (i <= j) {
        ans[k] = nums[i++];
        k++;
        ans[k] = nums[j--];
        k++;
    }
    for (i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
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
