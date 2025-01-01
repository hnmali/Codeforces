//hnmali
#include <iostream>
#include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n, sum = 0;
    cin >> n;
    vector<int> arr(3);
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    int ans = n/sum*3;
    if( n % sum == 0)
        cout << ans << "\n";
    else if (n % sum <= arr[0])
        cout << ans+1 << "\n";
    else if (n % sum <= (arr[0]+arr[1]))
        cout << ans+2 << "\n";
    else
        cout << ans+3 << "\n";
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
