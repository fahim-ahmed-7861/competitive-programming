#include<stdio.h>
int main()
{
    int i,j,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&i);

        j=sqrt(i);

        if(j*j==i) printf("YES\n");

        else printf("NO\n");
    }
    return 0;
}
