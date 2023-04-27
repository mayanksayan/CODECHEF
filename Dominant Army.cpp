#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if ((a>(b+c)) || b>(a+c) || c>(a+b)) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	    
	}
	return 0;
}
