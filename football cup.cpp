#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if(a==0 && b==0) cout<<"no"<<endl;
	    else if(a>b || b>a) cout<<"no"<<endl;
	    else cout<<"yes"<<endl;
	}
	return 0;
}
