//hnmali
#include <iostream>
using namespace std;
    
void solve() {
    int n,k;
    cin >> n >> k;
    if (k == 1) {
        cout << n <<"\n";
        return;
    }
    cout << n*k - (k-1) << "\n";
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
