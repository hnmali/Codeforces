    #include <bits/stdc++.h>
    using namespace std;

    void solve()
    {
        int n, k;
        vector<int> scores;
        cin >> n >> k;
        while (n--) {
            int temp;
            cin >> temp;
            scores.push_back(temp);
        }
        k = scores[k - 1];
        int ans = 0;
        for (int i = 0; i < scores.size(); i++) {
            if (scores[i] >= k && scores[i] > 0)
                ans++;
            else
                break;
        }
        cout << ans;
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
