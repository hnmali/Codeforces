#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    if(n%2==0 && n>2)
        cout << "YES\n";
    else
        cout << "NO\n";
}
 
signed main ()
{
    // ios::sync_with_Stdio.h(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    // cin >> t;
    t = 1;
    while(t--){
        solve();
    }
}
