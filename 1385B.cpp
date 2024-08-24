//hnmali
#include <iostream>
#include <vector>
// #include <unordered_set>
// #include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(2*n);
    for (int i = 0; i < 2*n; i++)
        cin >> nums[i];
    cout << nums[0] << " ";
    for (int i = 1; i < 2*n; i++) {
        bool flag = true;
        for (int j = i-1; j >= 0; j--) {
            if (nums[i] == nums[j])
                flag = false;
        }
        if (flag)
            cout << nums[i] << " ";
    }
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
