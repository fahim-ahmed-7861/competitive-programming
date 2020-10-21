#include<stdio.h>
int main()
{
    int i,j,T,n,k,ara[100],temp;
    scanf("%d",&T);

    while(T--)
    { k=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
                k++;
            }
        }
    }

    printf("Optimal train swapping takes %d swaps.\n",k);
    }
    return 0;
}
