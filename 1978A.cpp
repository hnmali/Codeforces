//hnmali
#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> pages(n);
    for (int i = 0; i < n; ++i) 
        cin >> pages[i];
    if (n == 2) {
        cout << pages[0]+pages[1] << "\n";
        return;
    }
    int maxPage = 0;
    for (int i = 0; i < n-1; i++)
        maxPage = max(maxPage,pages[i]);
    cout << maxPage + pages[n-1] << "\n";   
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
