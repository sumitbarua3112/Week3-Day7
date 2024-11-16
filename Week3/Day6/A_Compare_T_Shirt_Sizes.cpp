#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        string a,b;
        cin>>a>>b;
        ll a1,b1;
        for(int i=0; i<a.size(); ++i) {
          if(a[i]=='S')
          {
             a1=1;
          }
          else if(a[i]=='M')
          {
            a1=2;
          }
          else if(a[i]=='L')
          {
            a1=3;
          }
        }

         for(int i=0; i<b.size(); ++i) {
          if(b[i]=='S')
          {
             b1=1;
          }
          else if(b[i]=='M')
          {
            b1=2;
          }
          else if(b[i]=='L')
          {
            b1=3;
          }
        }
        if(a1<b1)
        {
            cout<<"<"<<endl;
        }
        else if(a1>b1)
        {
            cout<<">"<<endl;
        }
        else if(a1==b1)
        {
            if(a1==3){
            if(a.size()>b.size())
            {
                cout<<">"<<endl;
            }
            else if(a.size()<b.size())
            {
                cout<<"<"<<endl;
            }
            else if(a.size()==b.size())
            {
                cout<<"="<<endl;
            }
            }
            else{
                if(a.size()>b.size())
            {
                cout<<"<"<<endl;
            }
            else if(a.size()<b.size())
            {
                cout<<">"<<endl;
            }
            else if(a.size()==b.size())
            {
                cout<<"="<<endl;
            }

            }
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
