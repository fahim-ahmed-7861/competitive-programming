#include<stdio.h>
int main()
{
    int a,b,t,i=1,sum,n,r;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&a,&b);

        sum=a*b;
   // if(a==1 || b==1)printf("Case %d: %d\n",i++,sum);

 if(a==2 || b==2)
    {
       if(a==2)r=b;
            else r=a;

            n=r%4;

            if(n==0)
            {
                sum=sum/2;
                 printf("Case %d: %d\n",i++,sum);
            }
            else if(n==2)printf("Case %d: %d\n",i++,r+2);

            else printf("Case %d: %d\n",i++,r+1);

    }

       else if(sum%2==0)
        {


            sum=sum/2;



            printf("Case %d: %d\n",i++,sum);
        }
        else
        {
            sum=(sum+1)/2;

            printf("Case %d: %d\n",i++,sum);
        }
    }
    return 0;
}
