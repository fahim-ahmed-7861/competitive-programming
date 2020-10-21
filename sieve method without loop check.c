#include<stdio.h>
#include<math.h>
#define size 1000
ara[1010];
int main()
{
    int i,j,a;

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

     if(ara[a]==a && 0<=a && a<=1000 && a!=0) printf("prime\n");

     else printf("Not prime\n");

}
