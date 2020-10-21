#include<stdio.h>
int main()
{
    int T,temp,p,c,i,n,sum;
    scanf("%d",&T);

    while(T--)
    {
        c=0;
        scanf("%d",&temp);
        n=temp;
        while(n!=0)
        {
            p=n%10;
            c=c+(p*p*p);

            n=n/10;

        }
        if(c==temp)

        {
            printf("%d is an armstrong number!\n",temp);
        }
        else
        {
            printf("%d is not an armstrong number!\n",temp);
        }

    }
    return 0;
}
