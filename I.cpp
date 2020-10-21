#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k=0,sum;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=0; j<=n; j++)
        {
            sum=(i*2)+(j*3);

            if(sum==n)
            {
                cout<<i<<" "<<j<<endl;
                k++;
            }
        }
    }
    for(j=1; j<=n/2; j++)
    {
        for(i=0; i<=n/3; i++)
        {
            sum=(i*3)+(j*2);

            if(sum==n)
            {
                k++;
                cout<<i<<" "<<j<<endl;}

        }
    }
    cout<<k;
}
