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
    bool flag = true;
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i-1]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if (nums[0] != nums[1])
        cout << "BR";
    else
        cout << "RB";
    for (int i = 2; i < n; i++)
        cout << "B";
    cout << "\n";
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
