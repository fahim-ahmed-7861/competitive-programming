#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);

   k:while(t--)
    {

    int i,n,p=0;

    scanf("%d",&n);

    p=sqrt(n);


    for(i=2; i<=p; i++)
    {
        if(n%i==0)
        {
            printf("no\n");
            goto k;
        }
    }
    printf("yes\n");

    }
    return 0;
}
