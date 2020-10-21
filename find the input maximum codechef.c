#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char ch=' ';
        long long i,ara[100],count=0,j,temp;

        for(i=0; ch==' '; i++)
        {
            count++;
            scanf("%lld%c",&ara[i],&ch);

        }
        count--;
      int p=i;
      for(i=0; i<p; i++)
      {
          if(count==ara[i])
          {
              ara[i]=0;
              break;
          }
      }
       for(i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(ara[i]<ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
      printf("%lld\n",ara[0]);


    }
    return 0;
}
