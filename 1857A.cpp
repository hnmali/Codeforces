#include <iostream>
#include <vector>
using namespace std;
    
void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int cntOdd = 0;
    for (int i = 0; i < n; i++)
        if (nums[i]&1)
            cntOdd++;
    if (cntOdd&1)
        cout << "NO\n";
    else
        cout << "YES\n";
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
