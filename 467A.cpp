        #include <bits/stdc++.h>
        using namespace std;

        void solve()
        {
            int n;
            cin >> n;
            vector<pair<int, int>> rooms;
            while (n--) {
                pair<int, int> temp;
                cin >> temp.first;
                cin >> temp.second;
                rooms.push_back(temp);
            }
            int ans = 0;
            for (int i = 0; i < rooms.size(); i++) {
                if (rooms[i].second - rooms[i].first >= 2)
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
