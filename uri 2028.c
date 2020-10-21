#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,sum,j,k=0;

    while(scanf("%d",&n)==1)
    {
        k++;
        if(n==0)printf("Caso %d: 1 numero\n0\n\n",k);

        else
        {
            sum=(n*(n+1))/2;
            sum++;
            printf("Caso %d: %d numeros\n0",k,sum);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=i; j++)
                {
                    printf(" %d",i);
                }
            }
            printf("\n\n");
        }
    }

    return 0;
}


