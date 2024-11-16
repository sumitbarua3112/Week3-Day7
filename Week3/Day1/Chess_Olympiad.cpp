#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll x,y,z;
        cin>>x>>y>>z;
        double k=x+0.5*y;
        double k1=z+0.5*y;
        ll m=4-(x+y+z);
        if(k+m>k1)
        {
            cout<<"Yes"<<endl;
        }
        else{
          cout<<"No"<<endl;
        }
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    
        solve();
    
}
