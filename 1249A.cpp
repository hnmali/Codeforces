//hnmali
#include <iostream>
using namespace std;

void solve(){
    int n,a,b,c;
    cin >> a >> b >> c >> n;
    int maxCoin = max(a,max(b,c));
    int mustCoin = maxCoin - a + maxCoin - b + maxCoin - c;
    if (mustCoin > n) 
        cout << "NO\n";
    else if ((n - mustCoin) % 3 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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
