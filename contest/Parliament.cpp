#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if(b==0) cout<<"no"<<endl;
	    else if((b*2)>=a) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
