#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; ++i) {
            cin>>v[i]; 
        }
        sort(v.begin(),v.end());
         vector<ll>a=v;
        ll ans=INT_MAX;
        a.pop_back();
        a.pop_back();
        ans=min(a.back()-a.front(),ans);
          a=v;
          ans=min(a.back()-a[2],ans);
          ans=min(a[n-2]-a[1],ans);
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
