//hnmali
#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> gift(n);
    for (int i = 0; i < n; ++i) 
        cin >> gift[i];
    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (gift[i] < gift[minIndex]) 
            minIndex = i;
    }
    gift[minIndex]++;
    int ans = 1;
    for (int i = 0; i < n; i++)
        ans *= gift[i];
    cout << ans << "\n";
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
