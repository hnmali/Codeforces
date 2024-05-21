//hnmali
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void solve() {
    int n;
    string b;
    cin >> n >> b;

    string temp = b;
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());

    string r = temp;
    unordered_map<char, char> decode_map;
    int len = r.length();
    for (int i = 0; i < len; ++i) {
        decode_map[r[i]] = r[len - 1 - i];
    }

    string s = b;
    for (char &ch : s) {
        ch = decode_map[ch];
    }

    cout << s << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
