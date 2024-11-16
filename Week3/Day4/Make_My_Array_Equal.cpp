#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        vector<ll> v(n);
        map<ll,ll>mp;
        for(int i=0; i<n; ++i) {
            cin>>v[i];
            if(v[i]!=0){
            mp[v[i]]++; 
            }
        }
        if(mp.size()==1 || mp.size()==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
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
