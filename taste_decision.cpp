#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if((a*2)>(b*5))
	    cout<<"chocolate\n"<<endl;
	    else if((a*2)<(b*5))
	    cout<<"candy\n"<<endl;
	    else
	    cout<<"either\n"<<endl;
	    
	}
	return 0;
}
