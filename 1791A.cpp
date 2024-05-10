    #include <iostream>
    #include<vector>
    using namespace std;

    void solve()
    {
        string str = "codefrs";
        char ch;
        cin >> ch;
        for (int i = 0; i < 7; i++) {
            if (ch == str[i]) {
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
        return;
    }

    signed main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);         
        cout.tie(0);
        long long t;
        cin >> t;
        // t = 1;
        while (t--)
            solve();
    }
