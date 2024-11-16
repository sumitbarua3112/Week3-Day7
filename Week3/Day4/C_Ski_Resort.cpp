        #include<bits/stdc++.h>
        #define ll long long int
        using namespace std;
        int main()
        {
            ll t;
            cin>>t;
            while(t--)
            {
           ll n,k,q,ans=0;
           cin>>n>>k>>q;
           vector<ll>v(n);
           for(int i=0;i<n;i++)
           {
               cin>>v[i];

           }
           ll c=0;
           for(int i=0;i<n;i++)
           {
               if(v[i]<=q){
                c++;
                if(i==n-1 || v[i+1]>q){
                    if(c>=k){
                        ll x=c-k+1;
                        ll add=(x*(x+1))/2;
                        ans+=add;
                    }
                    c=0;
                }
              }
           }
           cout<<ans<<endl;
        }
    }