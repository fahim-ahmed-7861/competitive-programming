#include<stdio.h>
int main()
{
    int i,j,n,ara[500],ara1[500],count=0;

    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        for(j=2; j<=i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j) count++;
    }
    printf("%d \n",count);
    //if(i==n) printf("prime\n");

    //else printf("not prime\n");
}
