#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string input;
    int num = 0, numStat;
    cin >> numStat;
    for(int i=1; i<= numStat; i++) {
        cin >> input;
        if(input == "X++" or input == "++X")
            num++;
        else
            num--;
    }
    cout << num;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
