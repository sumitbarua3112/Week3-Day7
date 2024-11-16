#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll> v(n),v1(m);
        for(int i=0; i<n; ++i) {
            cin>>v[i]; 
        }
        for(int i=0; i<m; ++i) {
            ll a;
            cin>>a;
            v1[i]=h*a;
        }
        sort(v.begin(),v.end(),greater<ll>());
        sort(v1.begin(),v1.end(),greater<ll>());
        ll ans=0;
        for(int i=0; i<min(m,n); ++i) {
          if(v1[i]>=v[i])
          {
             ans+=v[i];
          }
          else{
            ans+=v1[i];
          }
        }
        cout<<ans<<endl;
        
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
