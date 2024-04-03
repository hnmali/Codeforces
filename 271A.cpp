#include <bits/stdc++.h>
using namespace std;

bool distinct(int n) {
    vector<int> arr;
    while (n) {
        int rem = n % 10;
        arr.push_back(rem);
        n /= 10;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] == arr[i+1])
            return true;
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    n++;
    while (distinct(n))
        n++;
    cout << n;    
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
