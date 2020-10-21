#include<stdio.h>
#include<math.h>
int main()
{

    int i,j,ara[100000],n,count=0,size;

    scanf("%d",&size);

    n=sqrt(size);

    for(i=0; i<=size; i++)
    {
        ara[i]=i;
    }
    ara[0]=ara[1]=0;
    for(i=2; i<=n; i++)
    {
        for(j=i*i; j<=size; j+=i)
        {
            ara[j]=0;
        }
    }

     for(i=2; i<=size; i++)
    {

      if(ara[i]!=0)count++;

    }
    printf("%d",count);
    return 0;
}
