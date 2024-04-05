        #include <bits/stdc++.h>
        using namespace std;

        void solve()
        {
            int n;
            cin >> n;
            vector<pair<char, char>> polarity;
            while (n--) {
                pair<char, char> temp;
                cin >> temp.first;
                cin >> temp.second;
                polarity.push_back(temp);
            }
            int ans = 1;
            for (int i = 1; i < polarity.size(); i++) {
                if (polarity[i -1].second == polarity[i].first)
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
