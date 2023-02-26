#include <iostream>
using namespace std;

int main() { int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    int count=0;
    while(n>0)
    {
        int rem=n%10;
        if(rem==4)
            count++;
        n=n/10;
    }
    cout<<count<<endl;
}
}
