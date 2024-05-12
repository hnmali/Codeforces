#include <iostream>
using namespace std;

void solve()
{
    int numA, numB, numC;
    cin >> numA >> numB >> numC;
    if ((numA > numB and numA < numC) or (numA > numC and numA < numB) )
        cout << numA << "\n";
    else if ((numB > numA and numB < numC) or (numB > numC and numB < numA)) 
        cout << numB << "\n";
    else if ((numC > numA and numC < numB) or (numC > numB and numC < numA)) 
        cout << numC << "\n";
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
