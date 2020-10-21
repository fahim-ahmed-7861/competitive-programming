#include<stdio.h>
int main()
{
    int n,e,a,b,i;

    scanf("%d",&n);

    while(n--)
    {
        e=0;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            for(i=b+1; i<a; i++)
            {
                if(i%2==1)e+=i;
            }
        }
        else
        {
            for(i=a+1; i<b; i++)
            {
                if(i%2==1)e+=i;
            }
        }
        printf("%d\n",e);
    }
   return 0;
}
