#include<stdio.h>
int main()
{
    double x=0,y=0,t;


    while(scanf("%lf",&t))
    {

         if(t>=0 && t<=10)
         {
             x+=t;
             y++;

             if(y==2)
             {
                 printf("media = %.2lf\n",x/2);
                 break;
             }
         }
         else
         {
             printf("nota invalida\n");
         }


    }
    return 0;
}


