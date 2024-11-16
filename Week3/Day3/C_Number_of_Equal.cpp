#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ,m;
        cin>>n>>m;
        vector<ll> v(n),v1(m);
        map<ll,ll>mp;
        for(int i=0; i<n; ++i) {
            cin>>v[i]; 
            mp[v[i]]++;
        }
        ll ans=0;
        for(int i=0; i<m; ++i) {
            cin>>v1[i]; 
            if(mp[v1[i]])
            {
                ans+=mp[v1[i]];
            }
        }
        cout<<ans<<endl;
        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    
        solve();
    
}
