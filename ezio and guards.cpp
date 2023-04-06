#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	cin>>n;
	while(n--){
	    cin>>a>>b;
	    if(a<b) cout<<"no"<<endl;
	    else cout<<"yes"<<endl;
	}
	return 0;
}
