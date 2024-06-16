//hnmali
#include <iostream>
using namespace std;

void solve(){
    long long n, a, b;
    cin >> n >> a >> b;
    if (a >= b) {
        cout << n * a << "\n";
        return;
    }
    long long cost = 0;
    int k = (b - a) > min(n,b)?min(n,b):(b-a);
    cost = k * (2 * b - k + 1) / 2;
    n -= k;
    cost += n * a;
    cout << cost << "\n";
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
