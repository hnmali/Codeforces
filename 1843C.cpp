#include<iostream>
using namespace std;

long long getPathSum(long long n){
    long long sum = 0;
    while(n > 0){
        sum += n;
        n /= 2;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << getPathSum(n) << '\n';
    }
    return 0;
}
