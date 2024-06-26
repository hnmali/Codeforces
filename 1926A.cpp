//hnmali
#include <iostream>
using namespace std;
    
void solve() {
    string s;
    cin >> s;
    int cntA = 0, cntB = 0;
    for (int i = 0; i < 5; i++) {
        if (s[i] == 'A')
            cntA++;
        else
            cntB++;
    }
    if (cntA > cntB)
        cout << "A\n";
    else
        cout << "B\n";
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
