#include<stdio.h>
int main()
{
    int n,i=0,j,k;
    scanf("%d",&n);

    while(n--)
    {
        ++i;
        j=i+1;
        k=j+1;
        printf("%d %d %d PUM\n",i,j,k);
        i=k+1;
    }
    return 0;
}
