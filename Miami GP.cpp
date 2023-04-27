#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float x,y;
	    cin>>x>>y;
	    
	    x=x*1.07;
	    
	    if(x>=y){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
