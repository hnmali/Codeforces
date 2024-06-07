//hnmali
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) 
        cin >> nums[i];
    vector<int> maxm(n-1);
    for (int i = 1, j=0; i < n; i++,j++)
    	maxm[j] = max(nums[i],nums[i-1]);
    int ans = maxm[0];
    for (int i = 1; i < n-1; i++) 
    	if (maxm[i] < ans)
    		ans = maxm[i];
    cout << ans - 1<< "\n";
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
