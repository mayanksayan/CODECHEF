#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a<=3) cout<<"bronze"<<endl;
	    else if(a>=3 && a<=6) cout<<"silver"<<endl;
	    else if (a>6) cout<<"gold"<<endl;
	}
	
	return 0;
}
