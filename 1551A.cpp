//hnmali
#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "1 0\n";
    else if (n == 2)
        cout << "0 1\n";
    else if (n % 3 == 0) 
        cout << n/3 << " " << n/3 <<"\n";
    else if ((n+1) % 3 == 0) 
        cout << (n+1)/3 - 1 << " " << (n+1)/3 << "\n";
    else 
        cout << (n+2)/3 << " " << (n+2)/3 - 1<< "\n";

    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
