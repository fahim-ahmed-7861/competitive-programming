#include<stdio.h>
int main()
{
    int n,i,k,sum;

    while(scanf("%d",&n)==1)
    { sum=0,k=1;
     if(n==0)return 0;

        for(i=n; k<=5; i++)
        {
            if(i%2==0)
            {
                sum+=i;
                k++;
            }
        }

        printf("%d\n",sum);
    }


}
