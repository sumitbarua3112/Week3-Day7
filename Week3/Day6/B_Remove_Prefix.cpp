#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        map<ll,ll>mp;
        ll ans=0,f=0,mx=-1;
        for(int i=1; i<=n; ++i) {
            ll a;
            cin>>a;
            if(mp[a]>0)
            {
              f=1;
              ans=mp[a];
              mx=max(ans,mx);
            }
            mp[a]=i;
        }
        if(f==0)
        {
            cout<<0<<endl;
        }
        else{
        cout<<mx<<endl;
        }

        
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
