#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll sum=0,mn=0;
        vector<ll>v;
        for(int i=0; i<n; ++i) {
           ll L=i;
           ll R=n-i-1;
          if(s[i]=='L')
          {
            if(R>L)
            {
                mn++;
                sum+=R;
                v.push_back(R-L);
            }
            else{
                sum+=L;
            }
          }
          else{
            if(L>R)
            {
                mn++;
                v.push_back(L-R);
                sum+=L;
            }
            else{
                sum+=R;
            }
          }

        }
        vector<ll>ans(n+1);
        for(int i=mn;i<=n;++i) {
           ans[i]=sum;
        }
        sort(v.begin(),v.end(),greater<ll>());
        for(int i=mn-1; i>=1; --i) {
          sum-=v.back();
          v.pop_back();
          ans[i]=sum;
          
        }
        for(int i=1; i<=n; ++i) {
          cout<<ans[i]<<" ";
        }cout<<endl;

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
