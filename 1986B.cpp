#include <iostream>
#include <vector>
using namespace std;

bool isPeak(const vector<vector<int>>& nums, int i, int j, int n, int m) {
    if (i > 0 && nums[i][j] <= nums[i-1][j])
        return false;
    if (i < n-1 && nums[i][j] <= nums[i+1][j]) 
        return false;
    if (j > 0 && nums[i][j] <= nums[i][j-1]) 
        return false;
    if (j < m-1 && nums[i][j] <= nums[i][j+1]) 
        return false;
    return true;
}

int maxNeighbour(vector<vector<int>>& nums, int i, int j, int n, int m) {
    int maxVal = -1;
    if (i > 0) maxVal = max(maxVal, nums[i-1][j]);
    if (i < n-1) maxVal = max(maxVal, nums[i+1][j]);
    if (j > 0) maxVal = max(maxVal, nums[i][j-1]);
    if (j < m-1) maxVal = max(maxVal, nums[i][j+1]);
    return maxVal;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> nums(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) 
            cin >> nums[i][j];
    }
    bool update;
    do {
        update = false;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (isPeak(nums, i, j, n, m)) {
                    int temp = maxNeighbour(nums, i, j, n, m);
                    if (nums[i][j] != temp) {
                        nums[i][j] = temp;
                        update = true;
                    }
                }
            }
        }
    } while (update);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << nums[i][j] << " ";
        }
        cout << "\n";
    }
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
