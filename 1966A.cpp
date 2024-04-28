#include <bits/stdc++.h>
using namespace std;

struct CompareSecond {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; 
    }
};
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    map<int,int> mp;
    priority_queue<pair<int,int>,vector<pair<int,int>>,CompareSecond> pq;
    for (int i = 0; i < n; i++) {
        mp[cards[i]]++;
    }
    for(auto it : mp){
        pq.push({it.first,it.second});
    }

    while(pq.top().second >= k) {
        pair<int,int> temp;
        temp.first = pq.top().first;
        temp.second = pq.top().second;
        pq.pop();
        temp.second -= k;
        pq.push(temp);
        temp.first = pq.top().first;
        temp.second = pq.top().second;
        temp.second += k - 1;   
        pq.pop();
        pq.push(temp);   
    }
    n = 0;
    while (!pq.empty()) {
        n += pq.top().second;
        pq.pop();
    }
    cout << n << "\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
        solve();
}
