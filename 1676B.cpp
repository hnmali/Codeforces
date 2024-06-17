//hnmali
#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;    
    vector<int> candy(n);
    for (int i = 0; i < n; ++i) 
        cin >> candy[i];
    int minCandy = candy[0], ans = 0;
    for (int i = 1; i < n; i++)
        minCandy = min(minCandy,candy[i]);
    for (int i = 0; i < n; i++)
        ans += candy[i] - minCandy;
    cout << ans << "\n";
    return;
}

int main()
{
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
