#include<stdio.h>
int main()
{
    int T,a,b,mul,t,lcd;
    scanf("%d",&T);

    while(T--)
    {
        scanf("%d %d",&a,&b);


    if(a>b)
    {
        for(t=a;t>0;t++)
        {
            if (t%a==0 && t%b==0)
            {

                break;
            }


        }
    }

    else if(a<b)
    {
        for(t=a;t>0;t++)
        {
            if (t%a==0 && t%b==0)
            {

                break;
            }


        }
    }

        printf("LCM = %d\n",t);}
    }

