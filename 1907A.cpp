#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    string input;
    cin >> input;
    char col=input[0];
    int row=input[1]-'0';
    
 
    for(int i=1; i<=8; i++)
    {
        if(i==row)
            continue;
        else
        cout << col<<i<<"\n";
    }
    for(char j='a';j<='h';j++) 
    {
        if(j==col)
            continue;
        else
            cout <<j<<row<<"\n";
    }    
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
