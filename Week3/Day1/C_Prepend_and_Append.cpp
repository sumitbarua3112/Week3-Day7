#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll l=0,r=n-1,ans=n;
        while(l<=r)
        {
            if(s[l]==s[r]){
                break;
            }
            else{
                ans-=2;
                l++,
                r--;
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
