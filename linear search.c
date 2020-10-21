#include<stdio.h>
int main()
{
    int n,i,a;
    printf("How many input: ");
    scanf("%d",&n);

    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("\nsearch number: ");
    scanf("%d",&a);

    for(i=0; i<n; i++)
    {
        if(ara[i]==a)
        {
            printf("position:%d\n",i);
            break;
        }
    }
    if(n==i)printf("Not found\n");


}
