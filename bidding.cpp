#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b && a>c)
	    cout<<"alice"<<endl;
	    else if(b>a && b>c)
	    cout<<"bob"<<endl;
	    else
	    cout<<"charlie"<<endl;
	    
	}
	return 0;
}
