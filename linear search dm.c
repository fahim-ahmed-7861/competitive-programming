//Linear search
#include<stdio.h>
int linear_search(int x,int a[],int n)
{
    int i=1,location;

    while(i<=n && x!=a[i])
        i=i+1;

    if(i<=n)location=i;

    else location=0;

    return location;

}
int main()
{
    int n,i,x;

    printf("How many element:\n");

    scanf("%d",&n);

    int ara[n+5];

    for(i=1; i<=n; i++)scanf("%d",&ara[i]);

    printf("Input a search number: \n");

    scanf("%d",&x);

    int ans=linear_search(x,ara,n);

    if(ans==0)printf("\nNot found\n");

    else printf("\nFound at position %d\n",ans);

    return 0;
}
