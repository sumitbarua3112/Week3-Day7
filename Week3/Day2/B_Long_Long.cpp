#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll ans=0;
        for(int i=0; i<n; ++i) {
            cin>>v[i]; 
            ans+=abs(v[i]);
        }
        ll c=0,f=1;
        for(int i=0; i<n; ++i) {
          if(v[i]<=0 && f==0)
          {
             continue;
          }
          else if(v[i]<0)
          {
             c++;
             f=0;
          }
          else
          {
            f=1;
          }
        }
        cout<<ans<<" "<<c<<endl;
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
