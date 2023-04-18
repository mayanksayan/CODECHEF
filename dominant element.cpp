#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    map<int,int>mp;
	    for(int i=0;i<n;i++)
	    mp[a[i]]++;
	    int m=0;
	     
	    for(auto it:mp)
	    {
	        m=max(m,it.second); 
	    }
	    
	    int c=0;
	      for(auto it:mp)
	    {
	        if(m==it.second) 
	        c++;
	    }
	    
	    if(c==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
