#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    int p=(y*z)+w;
	    if(p>x) cout<<"overflow"<<endl;
	    if(p<x) cout<<"unfilled"<<endl;
	    if(p==x) cout<<"filled"<<endl;
	    
	}
	return 0;
}
