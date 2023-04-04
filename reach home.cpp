#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if((a*5)>=b) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
