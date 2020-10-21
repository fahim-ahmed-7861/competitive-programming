#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m;
    cin>>n>>m;
    long long sum=0,c=0;
    int tho[n+5],weild[n+5];

    for(i=0; i<n; i++)
    {
        cin>>tho[i]>>weild[i];
    }
    sort(tho,tho+n);
    sort(weild,weild+n);

    for(i=n-1;  i>=0; i--)
    {
        if(tho[n-1]<=weild[i])
        {
            sum+=weild[i];
            c++;

            if(sum>=m)break;
        }


    }
    if(sum<m)
    {
         sum=m-sum;

        c+=sum/tho[n-1];

        if(sum%tho[n-1]!=0)c++;

        cout<<c<<endl;
    }
    else  cout<<c<<endl;

    return 0;
}
