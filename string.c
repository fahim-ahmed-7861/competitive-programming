#include<stdio.h>
int main()
{
    int a,b,i,n,p,k,sum,j,f;
    char str[100000];
    scanf("%d %d %d",&n,&p,&k);
    scanf(" %[^\n]",str);

    if(n%p==0 && n/p>=2)
    {
        a=n/p;
        sum=p;
        f=0;
        printf("%d\n",a);
        for(i=0; i<a; i++)
        {
            for(j=f; j<sum; j++)
            {
                printf("%c",str[j]);
                f++;
            }
            printf("\n");
            sum+=p;

        }
    }
    else if(n%k==0 && n/k>=2)
    {
        a=n/k;
        sum=k;
        f=0;
        printf("%d\n",a);
        for(i=0; i<a; i++)
        {
            for(j=f; j<sum; j++)
            {
                printf("%c",str[j]);
                f++;
            }
            printf("\n");
            sum+=k;

        }
    }
    else if(n/k>=2)
    {
        a=n%k;
        b=a+k;
        a=n/k;

        if(b==p)
        {
            sum=k;
            f=0;
            printf("%d\n",a);
            for(i=0; i<a-1; i++)
            {
                for(j=f; j<sum; j++)
                {
                    printf("%c",str[j]);
                    f++;
                }
                printf("\n");
                sum+=k;

            }
            for(i=j; i<n; i++)printf("%c",str[i]);
        }
    }
    else if(n/p>=2)
    {
        a=n%p;
        b=a+p;
        a=n/p;

        if(b==k)
        {
            sum=p;
            f=0;
            printf("%d\n",a);
            for(i=0; i<a-1; i++)
            {
                for(j=f; j<sum; j++)
                {
                    printf("%c",str[j]);
                    f++;
                }
                printf("\n");
                sum+=p;

            }
            for(i=j; i<n; i++)printf("%c",str[i]);
        }
       // else printf("-1\n");

    }
    else printf("-1\n");

    return 0;

}
