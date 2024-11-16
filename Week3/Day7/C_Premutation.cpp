#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n;
        cin>>n;
        ll a[n+5][n];
        for(int i=1; i<=n; ++i) {
          for(int j=1; j<n; ++j) {
            cin>>a[i][j];
          }
        }
        map<ll,ll>mp;
        map<ll,ll>m;
        for(int i=1; i<=n; ++i) {
          mp[a[i][n-1]]=i;
          m[a[i][n-1]]++;
        }
        ll idx=0,value;
        for(auto i:m) {
          if(i.second==1)idx=i.first;
          else value=i.first;
        }
        for(int i=1; i<n; ++i) {
          cout<<a[mp[idx]][i]<<" ";
        }
        cout<<value<<endl;
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
