#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x>=3 && x<7)
	    cout<<"MODERATE"<<endl;
	    else if(x<3)
	    cout<<"LIGHT"<<endl;
	    else
	    cout<<"HEAVY"<<endl;
	}
	return 0;
}
