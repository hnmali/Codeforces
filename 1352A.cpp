#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int nCopy = n, digit = 1;
    int k = 0;
    while (n > 0) {
        int rem = n % 10;
        n /= 10;
        if (rem != 0)
            k++;
        digit *= 10;
    }
    cout << k << endl;
    digit = digit / 10;
    string ans;
    while(nCopy > 0) {
        int temp = ((nCopy/digit) * digit);
        if (temp != 0) 
            cout << temp << " ";
        nCopy = nCopy - temp;
        digit /= 10;
    }
    cout << endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    // t = 1;
    while (t--)
        solve();
}
