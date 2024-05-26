//hnmali
#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.length() & 1) {
        cout << "NO\n";
        return;
    }
    string s1, s2;
    for (int i = 0; i < s.length()/2; i++) 
        s1.push_back(s[i]);
    for (int i = s.length()/2; i < s.length(); i++)
        s2.push_back(s[i]);
    if (s1 == s2)
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
    long long t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
