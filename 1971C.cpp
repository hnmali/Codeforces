//hnmali
#include <iostream>
using namespace std;

void solve()
{
    int a, b, c, d;
        cin>>a>>b>>c>>d;

        int mini = min(a,b);
        int maxi = max(a,b);
 
        if((c > mini && c < maxi) &&(d > mini && d < maxi))
        {
            cout<<"NO"<<endl;
        }
        else if((c > mini && c < maxi) || (d > mini && d < maxi)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    // t = 1;
    while (t--)
        solve();
    return 0;
}
