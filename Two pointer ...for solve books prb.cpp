#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,time,sum=0,maxi;

    scanf("%d %d",&n,&time);

    int ara[n+5];

    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);

        i=0;


    while(sum+ara[i]<=time && i<n)
    {
        sum+=ara[i++];
    }
    maxi=i;
    j=i;


    for(i=0; i<n; i++)
    {
        sum=sum-ara[i];

        while(j<n && sum+ara[j]<=time)
        {
            sum+=ara[j++];
        }

        if(j-i-1>maxi)maxi=j-i-1;
    }

    printf("%d\n",maxi);


    return 0;
}
