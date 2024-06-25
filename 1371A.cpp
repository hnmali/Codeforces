//hnmali
#include <iostream>
using namespace std;
    
void solve() {
    int n;
    cin >> n;
    if(n&1)
        cout << n/2 + 1 << "\n";
    else
        cout << n/2 << "\n";
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
