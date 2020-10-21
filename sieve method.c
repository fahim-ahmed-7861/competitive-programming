#include<stdio.h>
#define size 1000
int main()
{
    int i,j,ara[1010],a;

    for(i=0; i<=size; i++)
    {
        ara[i]=i;
    }
    ara[0]=ara[1]=0;
    for(i=2; i<=sqrt(size); i++)
    {
        for(j=i*i; j<=size; j+=i)
        {
            ara[j]=0;
        }
    }
     scanf("%d",&a);
     for(i=2; i<=size; i++)
    {
        if(a==ara[i])break;
      //if(ara[i]!=0)printf("%d\n",ara[i]);

    }
    if(i==size+1 || a==0)printf("Not Prime\n");

    else printf("Prime\n");

}
