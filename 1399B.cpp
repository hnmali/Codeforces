#include <iostream>
#include <vector>
#include <algorithm> // for std::min
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> candy(n), orange(n);
    for (int i = 0; i < n; i++) 
        cin >> candy[i];
    for (int i = 0; i < n; i++)
        cin >> orange[i];
    
    int minCandy = candy[0], minOrange = orange[0];
    for (int i = 1; i < n; i++) {
        minCandy = min(minCandy, candy[i]);
        minOrange = min(minOrange, orange[i]);
    }
    
    long long ans = 0;
    for (int i = 0; i < n; i++) {
         int temp1 = candy[i] - minCandy;
        int temp2 = orange[i] - minOrange;
        if (temp1 and temp2) 
            ans += max(temp1,temp2);
        else
            ans += temp1 + temp2;
    }    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
