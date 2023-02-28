#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    // your code goes here
    int t, a, b, c, mx = 0, mn = 0;
    cin >> t;
    while (t--)
    { 
        cin >> a>>b>>c;
        mn = min(min(a,b),c);
        mx = max(max(a,b),c);
        cout << mx - mn << endl;
    }
    return 0;
}
