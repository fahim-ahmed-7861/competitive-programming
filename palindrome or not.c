#include<stdio.h>
int main()

{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int a,count=0,s,c,n;
        double res=0.0;

        scanf("%d",&a);

        s=n=a;

        while(n>0)
        {
            n/=10;
            count++;
        }
        count--;

        while(a>0)
        {
            res+=(a%10)*pow(10,count);

            count--;

            a/=10;
        }
        if(res==s)printf("wins\n");

        else printf("losses\n");

    }

    return 0;
}
