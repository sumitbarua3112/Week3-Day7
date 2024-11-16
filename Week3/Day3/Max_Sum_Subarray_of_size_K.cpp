#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll maximumsumsubarray(vector<ll>&v,int k)
{
    ll l=0,r=0,sum=0,ans=0,m=v.size();
    while(r<m)
    {
        sum+=v[r];
        if(r-l+1==k)
        {
            ans=max(ans,sum);
            sum-=v[l];
            l++,r++;
        }
        else{
            r++;
        }
    }
    return ans;
}
void solve()
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0; i<n; ++i) {
            cin>>v[i]; 
        }
        ll ans=maximumsumsubarray(v,k);
        cout<<ans<<endl;
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
   
        solve();
    
}
