#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define t(x) ; int x; cin>>x;while(x--)

void solve(){
	int x,y;
	cin>>x>>y;
    int temp = ((3*x)<(2*y))?(x*3):(y*2);
    cout<<temp<<endl;

}

int main() {
	// your code goes here
	t(x)
    solve();
	
	return 0;
}
