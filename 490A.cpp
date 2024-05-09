    #include <iostream>
    #include<vector>
    using namespace std;

    void solve()
    {
        int n;
        cin >> n;
        vector<int> students(n);
        for (int i = 0; i < n; i++)
            cin >> students[i];
        int i = 0, j = 0, k = 0;
        vector<vector<int>> ans;
        while (i < n && j < n && k < n) {
            if (students[i] == 1 and students[j] == 2 and students[k] == 3) {
                i++;
                j++;
                k++;
                ans.push_back({i,j,k});
            }
            if (students[i] != 1 and (i < n))
                i++;
            if (students[j] != 2 and (j < n))
                j++;
            if (students[k] != 3 and (k < n))
                k++;
        }
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < 3; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
        return;
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
