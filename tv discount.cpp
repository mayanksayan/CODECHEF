#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int e=a-c;
	    int f=b-d;
	    if(e>f) cout<<"second"<<endl;
	    else if(e<f) cout<<"first"<<endl;
	    else cout<<"any"<<endl;
	}
	return 0;
}
