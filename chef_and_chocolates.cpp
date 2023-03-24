#include <iostream>
using namespace std;

int main() {
	// your code goes here 
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int ans= 5*x+ 10*y;
	    int temp= ans/z;
	    cout << temp <<endl;
	}
	
	return 0;
}


