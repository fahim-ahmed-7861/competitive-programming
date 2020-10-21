#include<stdio.h>
int main()
{
    double n,p,sum,av=0,s;

    scanf("%lf",&n);

    n=n-2000;

    if(n<=0)printf("Isento\n");

    else
    {  p=n;
        while(p>0)
        {
             if(p<=1000)
           {
            s=(p/100)*8;
            av+=s;
            p=0;

            }
        else if(p>1000 && p<=2500)
        {
            s=((p-1000)/100)*18;
            av+=s;
            p=1000;

        }
        else if(2500<=p)
        {
             s=((p-2500)/100.0)*28;
            av+=s;
            p=2500;

        }

    }
    printf("R$ %.2lf\n",av);

    }
    return 0;
}
