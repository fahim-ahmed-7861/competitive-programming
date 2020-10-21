#include<stdio.h>
#include<string.h>
int main()
{
    int n,c=-1,i,k=0;
    scanf("%d",&n);
    int ara[n+1];
    scanf("%d",&ara[0]);

    for(i=1; i<n; i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]<ara[i-1] && k==0)
        {
            c=i;
          k=1;
        }
    }
    printf("%d\n",c+1);

    return 0;


}


