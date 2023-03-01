#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b;
        c=100-a;
        d=200-(2*b);
        if(c>d){
            
        cout<<"SECOND"<<endl;
        }
        else if(c<d){
            
        cout<<"FIRST"<<endl;
        }
        else{
            
        cout<<"BOTH"<<endl;
        } 
    }
	return 0;
}
