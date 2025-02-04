//hnmali
#include <iostream>
#include <vector>
// #include <string>
// #include <map>
// #include <unordered_set>
// #include<stack>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    int maxm = INT_MIN, maxm2 = INT_MIN;
    int countMax = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] > maxm) {
            maxm2 = maxm;
            maxm = nums[i];
            countMax = 1;  
        } else if (nums[i] == maxm) {
            countMax++;  
        } else if (nums[i] > maxm2) {
            maxm2 = nums[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] == maxm) {
            if (countMax > 1) {
                cout << "0 ";
            } else {
                cout << nums[i] - maxm2 << ' ';
            }
        } else {
            cout << nums[i] - maxm << ' ';
        }
    }
    cout << '\n';
}

int main() {
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
