#include<bits/stdc++.h>
using namespace std;
int c;
int linear(int ara[],int low,int high,int m)
{
    int i,sum;
    while(low<high)
    {
        sum=m-ara[low];

        if(ara[high]==sum)
        {
            high--;
            low++;
            c++;
        }
        else if(sum<ara[high])high--;

        else low++;


    }
    return 0;
}
int main()
{
    int t,j,n,m,i,k,sum,coun;
    cin>>t;

    while(t--)
    {
        c=0;
        cin>>n>>m;

        int ara[n+4];

        for(i=0; i<n; i++)cin>>ara[i];

        sort(ara,ara+n);


         linear(ara,0,n-1,m);

         cout<<c<<endl;

    }
    return 0;
}
