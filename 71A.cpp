#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    string sent;
    cin >> sent;
 
    if(sent.size()<=10)
        cout << sent<<"\n";
    else
        cout << sent[0]<<sent.size()-2<<sent[sent.size()-1]<<"\n";
 
    
}
signed main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    cin >> t;
    // t = 1;
    while(t--){
        solve();
    }
}
