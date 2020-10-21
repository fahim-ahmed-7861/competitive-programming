#include<stdio.h>
int main()
{
    int n,m;

    scanf("%d %d",&n,&m);

    if(n==1)
    {
        printf("Total: R$ %.2lf\n",4.00*m);
    }
    else if(n==2)
    {
      printf("Total: R$ %.2lf\n",4.50*m);
    }
    else if(n==3)
    {
         printf("Total: R$ %.2lf\n",5.00*m);
    }
    else if(n==4)
    {
       printf("Total: R$ %.2lf\n",2.00*m);
    }
    else if(n==5)
    {
        printf("Total: R$ %.2lf\n",1.50*m);
    }

    return 0;
}
