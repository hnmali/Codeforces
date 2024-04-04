        #include <bits/stdc++.h>
        using namespace std;

        void solve()
        {
            int arr[5][5];
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++)
                    cin >> arr[i][j];
            }
            int ans = 0;
            int m = 0, n = 0;
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (arr[i][j] == 1) {
                        m = i;
                        n = j;
                        break;
                    }
                }
            }
            if (m > 2)
                ans = m - 2;
            else if (m < 2)
                ans = 2 - m;
            if (n > 2)
                ans += n - 2;
            else if (n < 2)
                ans += 2 - n;
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
