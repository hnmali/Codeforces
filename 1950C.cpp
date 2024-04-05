#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string ans;
    string hr;
    hr.push_back(s[0]);
    hr.push_back(s[1]);
    int hrs = stoi(hr); 
    if (hrs > 11) {
        if (hrs == 12) {
            ans = hr;
            ans.push_back(':');
            ans.push_back(s[3]);
            ans.push_back(s[4]);
            ans.push_back(' ');
            ans.push_back('P');
            ans.push_back('M');
        }
        else {
            hrs -= 12;
            int temp = hrs;
            char digit1 = '0' + (hrs/10);
            char digit2 = '0' + (temp%10);
            ans.push_back(digit1);
            ans.push_back(digit2);
            ans.push_back(':');
            ans.push_back(s[3]);
            ans.push_back(s[4]);
            ans.push_back(' ');
            ans.push_back('P');
            ans.push_back('M');
        }
    }
    else {
        if (hrs == 0) {
            ans = "12:";
            ans.push_back(s[3]);
            ans.push_back(s[4]);
            ans.push_back(' ');
            ans.push_back('A');
            ans.push_back('M');
        }
        else {
            ans = s;
            ans.push_back(' ');
            ans.push_back('A');
            ans.push_back('M');
        }
    }
    cout << ans << endl;    
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
}
