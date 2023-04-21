#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if((a*100)>=(b*10)) cout<<"Cloth"<<endl;
	    else cout<<"disposable"<<endl;
	}
	return 0;
}
