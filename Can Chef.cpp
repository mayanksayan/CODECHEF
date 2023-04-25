#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if((a*15)>=(b*2)) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
