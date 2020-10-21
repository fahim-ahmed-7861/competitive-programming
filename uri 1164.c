#include<stdio.h>
int main()
{
     long long int n,sum,A;
    int T,i;
    scanf("%d",&T);

    while(T--)
    {

        scanf("%lld",&n);

         if(n==6 || n==28 || n==496 || n==8128 || n==33550336)
        {
            printf("%lld eh perfeito\n",n);

        }
        else
        {
           printf("%lld nao eh perfeito\n",n);
        }
    }
        return 0;

}
