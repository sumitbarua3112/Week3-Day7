#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll cnt=0;
        for(int i=0; i<k; ++i) {
          if(s[i]=='W')
          {
            cnt++;
          }
        }
        ll ans=cnt;
        for(int i=k; i<n; ++i) {
          if(s[i]=='W')cnt++;
          if(s[i-k]=='W')cnt--;
          ans=min(ans,cnt);
        }
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
