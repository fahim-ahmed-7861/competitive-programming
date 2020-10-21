#include<stdio.h>
int main()
{
    int n,i,t,z;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        if(n>10)
        {
            z=n-10;

            n=10;

            printf("%d %d\n",z,n);
        }

        else
        {
            i=0;

            n=n-i;

            printf("%d %d\n",i,n);


        }
    }

    return 0;
}
