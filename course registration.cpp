#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a+c)<=b) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
