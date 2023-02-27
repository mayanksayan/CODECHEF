#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(b+(c*2)>a)
	    cout<<"no\n";
	    else
	    cout<<"yes\n";
	}
	return 0;
}
