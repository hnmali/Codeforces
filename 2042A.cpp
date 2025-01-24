//hnmali
#include <iostream>
#include <vector>
// #include <string>
// #include <map>
// #include <unordered_set>
// #include<stack>
#include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> chest(n);
    for(int i = 0; i < n; i++)
        cin >> chest[i];
    sort(chest.begin(),chest.end(),greater<int>());
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (sum + chest[i] <= k)
            sum += chest[i];
        else 
            break;
    }
    cout << k - sum << '\n';
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
