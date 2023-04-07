#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,n;
	cin>>n;
	while(n--){
	    cin>>a>>b;
	    if(a>=(b*30)) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
