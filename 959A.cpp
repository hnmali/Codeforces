//hnmali
#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n&1)
        cout << "Ehab\n";
    else
        cout << "Mahmoud\n";
    return; 
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
