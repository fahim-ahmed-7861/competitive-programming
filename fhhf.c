#include<stdio.h>
int main()
{
    int i,k,n;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(k=1; k<=n; k++)
        {
            if(i==k || k==n-i+1) printf("* ");
            else printf(" ");
        }
        printf("\n");

    }
    return 0;
}
