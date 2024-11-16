#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        vector<string>st,st1;
        map<string,ll>mp;
        while(n--)
        {
            string s,a="";
            cin>>s;
            a+=s[s.size()-2];
             a+=s[s.size()-1];
             st1.push_back(s);
            st.push_back(a);
        }
        string b="";
        while(!st1.empty())
        {
            if(mp[st1.back()]==0)
            {
                b+=st.back();
                mp[st1.back()]++;
            }
            st.pop_back();
            st1.pop_back();
        }
        cout<<b<<endl;
        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
     solve();
    
}
