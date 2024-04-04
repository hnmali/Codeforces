    #include <bits/stdc++.h>
    using namespace std;

    void solve()
    {
        int n;
        cin >> n;
        vector<vector<int>> questions;
        while (n--) {
            vector<int> temp1;
            for (int i = 0; i < 3; i++) {
                int temp;
                cin >> temp;
                temp1.push_back(temp);
            }
            questions.push_back(temp1);
        }
        int ans = 0;
        for (int i = 0; i < questions.size(); i++) {
            int count = 0;
            for (int j = 0; j < 3; j++) {
                if (questions[i][j] == 1)
                    count++;
            }
            if (count > 1)
                ans++;
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
