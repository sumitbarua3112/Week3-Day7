#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>valid(vector<ll>&v,ll k)
{
    long long n=v.size();
    vector<ll>b;
    queue<ll>q;
    for(int i=0; i<k-1; ++i) {
      if(v[i]<0)q.push(v[i]);
    }
    for(int i=k-1; i<n; ++i) {
      if(v[i]<0)q.push(v[i]);
      if(!q.empty()){
         b.push_back(q.front());
         if(q.front()==v[i-k+1])
         q.pop();
      }
      else{
        b.push_back(0);
      }
    }
    return b;
}
void solve()
    {
        ll a;
        vector<ll>v;
        ll n=5;
       while(n--){
        ll a;
        cin>>a;
        v.push_back(a);
       }
       ll k;
       cin>>k;
       vector<ll>ans=valid(v,k);
       for(int i=0; i<ans.size(); ++i) {
         cout<<ans[i]<<" ";
       }
        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
  
        solve();
    
}
