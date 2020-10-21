#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {

        int n,m,i;
        scanf("%d %d",&n,&m);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);

        }
        float x=1.0*m/a[0];
        float y=1.0*m/a[n];
        printf("Case %d: %0.0f",j,x+y);
    }
    return 0;
}
