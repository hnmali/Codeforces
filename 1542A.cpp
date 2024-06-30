//hnmali
#include <iostream>
#include <vector>
using namespace std;
    
void solve() {
    int n;
    cin >> n;
    vector<int> nums(2*n);
    for (int i = 0; i < 2*n; i++)
        cin >> nums[i];
    int cntOdd = 0;
    for (int i = 0; i < 2*n; i++)
        if (nums[i]&1)
            cntOdd++;
    if (cntOdd == n)
        cout << "Yes\n";
    else 
        cout << "No\n";
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
