#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        if(n%2==1)printf("1\n");

        else printf("0\n");
    }
    return 0;
}
