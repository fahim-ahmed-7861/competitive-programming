#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,size,count=0;

    double temp=1.0,b;

    scanf("%d",&size);

    int ara[size+1];

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

      if(ara[i]!=0 && size%ara[i]==0)

       {
           //ara[count]=ara[i];
            b=ara[i];
         //  printf("%d\n",ara[i]);

             temp*=(1.0-(1.0/b));
          //printf("%lf\n",temp);
            //count++;
           // temp+=ara[0];

       }
    }
    temp=size*temp;
    printf("%.0lf\n",temp);
    return 0;
}
