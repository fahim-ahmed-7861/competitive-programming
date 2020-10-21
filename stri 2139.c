
#include<stdio.h>
int main()
{
    int a,b,sum=0,n,m;
    char ch;
    while(scanf("%d %d",&n,&m)==2)
    { sum=0;
    switch(n)
    {
    case 1 : sum+=31;

    case 2 : sum+=29;

    case 3 : sum+=31;

    case 4 : sum+=30;

    case 5 : sum+=31;

    case 6 : sum+=30;

    case 7 :  sum+=31;

    case 8 :  sum+=31;

    case 9 :  sum+=30;

    case 10 : sum+=31;

    case 11 : sum+=30;

    case 12 : sum+=25;

    default :sum-=m;

    }
  // printf("%d\n",sum);

    if(n==12)
    {
        if(m==25)printf("E natal!\n");

         else if(sum<0)printf("Ja passou!\n");

        else   printf("E vespera de natal!\n");
    }

    else
        printf("Faltam %d dias para o natal!\n",sum);
    }


    return 0;
}
