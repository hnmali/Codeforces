#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    unordered_map<char,int> ump;
    string s;
    cin>>s;
    string s1="";
    for(int i=s.length()-1;i>=0;i--){
        
        if(islower(s[i])>0 && ump['b']>0 and s[i]!='b')
        {
            ump['b']--;
            continue;
        }
        else if(isupper(s[i])>0 && ump['B']>0 and s[i]!='B')
        {
            ump['B']--;
            continue;
        }
        else if(s[i]=='b' || s[i]=='B')
        {
            ump[s[i]]++;
        }
        
        else
            s1+=s[i];
    }
    reverse(s1.begin(),s1.end());
    cout<<s1<<'\n';
    
}
signed main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    cin >> t;
    // t = 1;
    while(t--){
        solve();
    }
}
