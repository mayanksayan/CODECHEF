#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if((x*3)<=y)
	    std::cout << "YES" << std::endl;
	    else
	    std::cout << "NO" << std::endl;
	}
	
	return 0;
}
