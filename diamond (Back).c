#include<stdio.h>
int main()
{
    int i,j,k=0,n,s;
    scanf("%d",&n);
    s=n/2;
    s++;


    for(i=1; i<=s; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>=i && i+j<=n+1) printf("* ");

            else printf("  ");
        }

        printf("\n");
    }

}
