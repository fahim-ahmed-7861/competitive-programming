#include<stdio.h>
int main()
{
    int i,j,n,a=0,b=1,c;
    scanf("%d",&n);
     printf("0 %d ",b);

    for(i=2; i<n; i++)
    {

        c=a+b;

        a=b;

        b=c;
        if(i+1==n)
        {
            printf("%d\n",b);
            return 0;
        }

         printf("%d ",b);

    }

}
