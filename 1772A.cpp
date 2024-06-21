//hnmali
#include <iostream>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int ans = s[0] - '0' + s[2] - '0';
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
