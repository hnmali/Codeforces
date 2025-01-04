//hnmali
#include <iostream>
#include <vector>
// #include <map>
#include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> nums(m);
    for(int i = 0; i < m; i++) 
        cin >> nums[i];
    unordered_set<int>st;
    for(int i = 0; i<k; i++) {
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    int dontKnow = 0;
    for(int i=1; i<=n; i++){
        if(st.find(i) == st.end()){
            dontKnow = i;
            break;
        }
    }
    string ans = "";
    for(int i = 0; i < m; i++) {
        if(k < n-1)
            ans += '0';
        else if(k == n-1)
            ans += nums[i]==dontKnow ? '1' : '0';
        else
            ans += '1';
    }
    cout << ans << "\n";
    return;
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
