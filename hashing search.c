#include<stdio.h>
#include<math.h>
int main()
{
    int low,t,i,n,k,high,p,num;

    printf("input low & high range\n");

   scanf("%d %d",&low,&high);

    int ara[abs(low)+high];

    for(i=0; i<=high+abs(low); i++)
    {
        ara[i]=0;
    }
    printf("How many number input in array\n");
   scanf("%d",&n);
    for(i=0; i<n; i++)
    {
         scanf("%d",&p);
        ara[p+k]=1;
    }
  printf("How many search\n");

  scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&num);

       if(ara[num+abs(low)]==1)printf("Found\n");

       else printf("Not found\n");
   }
   return 0;
}

