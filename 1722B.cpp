//hnmali
#include <iostream>
using namespace std;
    
void solve() {
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            if (s1[i] == 'R' or s2[i] == 'R') {
                cout << "NO\n";
                return;
            }
        }
    }
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
