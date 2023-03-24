#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<=y && y<=x+200){
            cout<<"yes\n";
            
        }else{
            cout<<"no\n";
        }
        
    }
	return 0;
}
