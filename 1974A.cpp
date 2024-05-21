//hnmali
#include <iostream>

using namespace std;

void solve() {
    int x, y;
	cin>>x>>y;
	int ans = 0;
	ans += ((y/2) + (y%2));
	x -= (ans*7);
	if(y%2 == 1)
		x-=4;
	if(x > 0) {
		ans += (x/15);	
		x = x%15;
		if(x > 0) 
		    ans++;
	}
	cout<<ans<<"\n";
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
