#include<stdio.h>
int main()
{
    int n,t;
     scanf("%d",&t);

    while(t--)
    {
    scanf("%d",&n);

    if(n>=2015)
    {
        printf("%d A.C.\n",n-2014);
    }
    else

        printf("%d D.C.\n",2015-n);
    }
    return 0;
}
