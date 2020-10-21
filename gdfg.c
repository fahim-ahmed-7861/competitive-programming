#include<stdio.h>
int main()
{
    int i,j,n;

    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(i==n)
        {
            printf("prime\n");
            break;
        }
        else if(n%i==0)
        {
            printf("Not prime\n");
            break;
        }
    }
}
