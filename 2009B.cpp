//hnmali
#include <iostream>
#include <vector>
// #include <string>
// #include <map>
// #include <unordered_set>
#include<stack>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve() {
    int n;
    cin >> n;
    stack<int> st;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            char ch;
            cin >> ch;
            if(ch == '#')
                st.push(j+1);
        }
    }
    while(!st.empty()) {
        cout << st.top() << ' ';
        st.pop(); 
    }
    cout << '\n';
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
