#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> heights;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        heights.push_back(temp);
    }
    int maxIndex = 0, max = heights[0];
    for (int i = 1; i < n; i++) {
        if (heights[i] > max) {
            max = heights[i];
            maxIndex = i;
        }
    }
    while (heights[0] != max) {
        swap(heights[maxIndex],heights[maxIndex - 1]);
        maxIndex--;
        ans++;
    }
    int minIndex = 1, min = heights[1];
    for (int i = 2; i < n; i++) {
        if (heights[i] <= min) {
            min = heights[i];
            minIndex = i;
        }
    }
    while (heights[n - 1] != min) {
        swap(heights[minIndex], heights[minIndex + 1]);
        minIndex++;
        ans++;
    } 
    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
}
