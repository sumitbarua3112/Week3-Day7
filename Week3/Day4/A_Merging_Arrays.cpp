#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n,m ;
        cin>>n>>m;
        vector<ll> v2;
        for(int i=0; i<n; ++i) {
            ll a;
            cin>>a; 
            v2.push_back(a);
        }
         for(int i=0; i<m; ++i) {
            ll b;
            cin>>b; 
            v2.push_back(b);
        }
        sort(v2.begin(),v2.end());
        for(auto i:v2) {
          cout<<i<<" ";
        }

        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
   
        solve();
    
}
