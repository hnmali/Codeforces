        #include <bits/stdc++.h>
        using namespace std;

        void solve()
        {
            string s, t;
            cin >> s >> t;
            for (int i = 0, j = t.length() - 1; i < t.length(); i++, j--) {
                if (s[i] != t[j]) {
                    cout << "NO";
                    return;
                }
            }
            cout << "YES";
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
