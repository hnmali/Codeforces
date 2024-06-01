//hnmali
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i= 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int sum = 0, i = 0, j = n-1;
    while (k--) {
        if (a[i] > b[j])
            break;
        if (a[i] < b[j]) {
            swap(a[i],b[j]);
            i++;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
        sum += a[i];
    cout << sum << "\n";
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
