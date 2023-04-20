#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b && a>c) cout<<"Setter"<<endl;
	    else if(c>b && c>a) cout<<"editorialist"<<endl;
	    else if(b>a && b>c) cout<<"tester"<<endl;
	} 
	return 0;
}
