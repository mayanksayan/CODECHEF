#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int i,j,S[N],T[N];
	int s1=0,t1=0;
	int max[N];
	int X[N];
	for(i=0;i<N;i++){
	    cin>>S[i] >>T[i];
	    s1=s1+S[i];
	    t1=t1+T[i];
	    if(s1>t1){
	        max[i]=s1-t1;
	        X[i]=1;
	    }
	    else{
	    max[i]=t1-s1;
	    X[i]=2;
	    }
	}
	 int x=0,m=0;
     for(i=0;i<N;i++){
     if(m<=max[i]){
         m=max[i];
         x=X[i];
         
     }
 }
      cout<<x<<" "<<m;
	return 0;
}
