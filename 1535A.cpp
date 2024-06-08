//hnmali
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    vector<int> nums(4);
    for (int i = 0; i < 4; i++)
        cin >> nums[i];
    int max1 = 0, max2 = 0;
    for (int i = 0; i < 4; i++) {
        if (nums[i] > max1)
            max1 = nums[i];
    }
    for (int i = 0; i < 4; i++) {
        if (nums[i] == max1)
            continue;
        if (nums[i] > max2)
            max2 = nums[i];
    }
    int win1 = max(nums[0],nums[1]);
    int win2 = max(nums[2],nums[3]);
    if ((max1 == win1 && max2 == win2) or (max1 == win2 and max2 == win1))
        cout << "YES\n";
    else 
        cout << "NO\n";
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
