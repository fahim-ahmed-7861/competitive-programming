#include<stdio.h>
int main()
{
    int n,k,sum=0,i,count=0,p,j,temp;
    scanf("%d %d",&n,&k);
    int ara[n+1];

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);

    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ara[i]<ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }

        for(i=0; i<n; i++)
        {
                sum+=ara[i];
                count++;
                if(sum>=k)break;



        }
       printf("%d",count);

      return 0;

    }





