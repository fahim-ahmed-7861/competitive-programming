#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,size=100,a;

    printf("input a integar:\n");

    scanf("%d",&a);

    int ara[110];

    for(i=0; i<=size; i++)ara[i]=i;

    n=sqrt(size);

    ara[0]=-1,ara[1]=-1;
    for(i=2; i<=n; i++)
    {
        for(j=i*i; j<=size; j+=i)
        {
            ara[j]=-1;
        }
    }
    if(ara[a]!=-1)printf("prime\n");

    else printf("not prime\n");

     return 0;
}

