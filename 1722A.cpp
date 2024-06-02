//hnmali
#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    if (n != 5) {
        cout << "NO\n";
        return;
    }
    vector<int> cnt(26,0);
    int cntT = 0;
    for (int i = 0; i < 5; i++) {
        if (s[i] == 'T')
            cntT++;
        else if (s[i] >= 'a' and s[i] <= 'z')
            cnt[s[i]-'a']++;
        else {
            cout << "NO\n";
            return;
        }
        
    }
    if (cntT > 1) {
        cout << "NO\n";
        return;
    }
    cnt['i'-'a']--;
    cnt['m'-'a']--;
    cnt['u'-'a']--;
    cnt['r'-'a']--;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] != 0) {
            cout << "NO\n";
            return;
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
