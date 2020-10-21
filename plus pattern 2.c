#include<stdio.h>
int main()
{
    int i,j,n,p;
    scanf("%d",&n);
    if(n%2==0) n++;
    p=n/2;
    p++;

    for(i=1;i<=n;i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==p || j==p)
            {
                printf("* ");

            }
            else printf("  ");
        }
        printf("\n");
    }

}
