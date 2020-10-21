#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[4000],cra[4000],i,n;

    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)scanf("%d",&cra[i]);

        for(i=0; i<n-1; i++)
        {
            ara[i]=abs(cra[i+1]-cra[i]);
        }
        sort(ara,ara+n-1);

        for(i=0; i<n-1; i++)
        {
            if(ara[i]==ara[i+1])break;
        }
        if(i==n-1)printf("Jolly\n");

        else printf("Not jolly\n");
    }
    return 0;
}
