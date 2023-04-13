#include <iostream>
using namespace std;
int main() {
	// your code goes here
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i = 0; i < n;i++){
            cin>>a[i];
        }
        int k = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1 || a[i] == 2 || a[i] == 3 || a[i] == 4 || a[i] == 5 || a[i] == 6 || a[i] == 7){
                k = i + 1;
            }
        }
        cout<<k<<endl;
    }
	return 0;
}
