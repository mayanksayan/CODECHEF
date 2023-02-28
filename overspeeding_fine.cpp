#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a>100)
	    cout<<"2000"<<endl;
	    else if(a>70 && a<=100)
	    cout<<"500"<<endl;
	    else
	    cout<<"0"<<endl;
	        
	    
	}
	return 0;
}
