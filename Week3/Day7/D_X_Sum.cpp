#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ,m;
        cin>>n>>m;
        ll a[n+1][m+1];
        for(int i=1; i<=n; ++i) {
          for(int j=1; j<=m; ++j) {
            cin>>a[i][j];
          }
        }
        ll ans=0;
        for(int i=1; i<=n; ++i) {
          for(int j=1; j<=m; ++j) {
            ll temp=0;
            temp+=a[i][j];
            ll x=i;
            ll y=j;
            x--;
            y--;
            while(x>0 && y>0)
            {
                temp+=a[x][y];
                x--;
                y--;
            }
            x=i;
            y=j;
            x--;
            y++;
            while(x>0 && y<=m)
            {
               temp+=a[x][y];
               x--;
               y++;
            }
            x=i;
            y=j;
           x++;
           y++;
           while(x<=n && y<=m)
           {
              temp+=a[x][y];
              x++;
              y++;
           }
           x=i;
           y=j;
           x++;
           y--;
           while(x<=n && y>0)
           {
            temp+=a[x][y];
            x++;
            y--;
           }
           ans=max(ans,temp);
          }
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
