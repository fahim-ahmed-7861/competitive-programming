#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;

    cin>>n>>x>>y;

    n=n-x;

    n=n%y;

    cout<<n<<endl;

    return 0;
}
