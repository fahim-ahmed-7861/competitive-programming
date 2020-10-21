#include<stdio.h>
int main()
{
    int i,j,n,temp;
    scanf("%d",&n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;

            }

        }

    }
    for(i=0; i<n; i++)
                {
                    printf("%d ",ara[i]);
                }

    return 0;
}

