#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll c=0;
        for(int i=0; i<n; ++i) {
          if(s[i]=='B')
          {
             c++;
             i+=k;
             i--;
          }
        }
        cout<<c<<endl;
        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    ll t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
