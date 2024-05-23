//hnmali
#include <iostream>

using namespace std;

void solve()
{
    int n;
    string work;
    cin >> n >> work;
    for (int i = 1; i < n; i++) {
        if (work[i] != work[i-1]) {
            for (int j = i + 1; j < n; j++) {
                if (work[i-1] == work[j]) {
                    cout << "NO\n";
                    return;
                }
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
    long long t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
