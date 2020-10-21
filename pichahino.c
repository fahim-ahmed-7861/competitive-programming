#include<stdio.h>
int main()
{
    int t,k;

    scanf("%d",&k);

    for(t=1; t<=k; t++)
    {

        int ara[100],i,j,n,count=0,max=2;

        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=0; i<n; i++)
        {
            if(ara[i]>max)

            {
                max=ara[i];
                count++;
            }
        }
        printf("Case %d: %d\n", t, count);
    }
    return 0;
}
