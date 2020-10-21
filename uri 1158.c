#include<stdio.h>
int main()
{
    int x,y,i,t,sum=0,k;

    scanf("%d",&t);

    while(t--)
    {
        sum=0;
        scanf("%d %d",&x,&y);

        if(x%2==0 )x++;

        for(i=x,k=1; k<=y; k++,i+=2)sum+=i;


        printf("%d\n",sum);
    }
   return 0;
}
