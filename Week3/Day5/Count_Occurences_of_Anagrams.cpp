#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        
        string pat,txt;
        cin>>txt>>pat;
        vector<int>p(26,0);
	    vector<int>s(26,0);
	    int n=pat.size(),m=txt.size();
	    for(int i=0;i<n;i++)
	    {
	        p[pat[i]-'a']++;
	        s[txt[i]-'a']++;
	    }
	    int c=0;
	    if(p==s)
	    {
	        c++;
	    }
	    for(int i=n;i<m;i++)
	    {
	        s[txt[i]-'a']++;
	        s[txt[i-n]-'a']--;
	        if(p==s)
	        {
	            c++;
	        }
	      
	    }
	    cout<<c<<endl;

    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    
        solve();
    
}
