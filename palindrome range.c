#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,ara[1000],p,k,mod,res=0;
    scanf("%d",&n);

    for(i=11; i<=n; i++)
    {
        p=i;
        res=0;
        for(j=0; p>0 ; j++)
        {
            res+=p%10*pow(10,j);
           // printf("%d\n",res);
            p/=10;

        }
        printf("%d\n",res);
        if(res==i)
        {
            ara[k]=i;
            //printf("%d\n",i);
            k++;
        }
    }
    i=k;
   /* for(k=0; k<i; k++)
    {
        printf("%d ",ara[k]);
    }*/
}
