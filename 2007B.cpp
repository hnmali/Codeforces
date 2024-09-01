//hnmali
#include <iostream>
#include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    vector<pair<char, pair<int, int>>> opert(m);
    for (int i = 0; i < n; i++) 
        cin >> nums[i];
    for (int i = 0; i < m; i++) {
        char op;
        int l, r;
        cin >> op >> l >> r;
        opert[i] = {op, {l, r}};
    }
    int maxm = nums[0];
    for (int i = 1; i < n; i++)
        maxm = max(maxm,nums[i]);
    for (int i = 0; i < m; i++) {
        if (maxm <= opert[i].second.second and maxm >= opert[i].second.first) {
            if (opert[i].first == '+')
                maxm++;
            else
                maxm--;
        }
        cout << maxm << " ";
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
