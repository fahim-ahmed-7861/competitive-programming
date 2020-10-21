#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;

    cin>>n;

    if(n<=2)cout<<-1<<endl;

    else
    {
        for(i=2; i<=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<1<<endl;
    }
    return 0;
}
