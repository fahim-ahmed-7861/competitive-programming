#include<stdio.h>
#include<math.h>
int main()
{

    int i,n,size,t;

    scanf("%d",&t);

    while(t--)
    {
          scanf("%d",&n);
            size=sqrt(n);


    for(i=2; i<=size; i++)
    {
        if(n%i==0)break;
    }

    if(i==size+1)printf("%d eh primo\n",n);

    else printf("%d nao eh primo\n",n);
    }

    return 0;
}

