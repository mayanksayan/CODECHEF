#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if(a<b)
	    cout<<"profit\n"<<endl;
	    else if(a>b)
	    cout<<"loss\n"<<endl;
	    else
	    cout<<"neutral\n"<<endl;
	}
	return 0;
}
