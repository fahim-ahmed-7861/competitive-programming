#include<stdio.h>
int main()
{
    int i,j,n,sort[500],temp;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&sort[i]);
    }
    for(i=0; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(sort[i]>sort[j])
            {
                temp=sort[i];
                sort[i]=sort[j];
                sort[j]=temp;
            }
        }
    }

    for(j=0; j<n; j++)
    {
        printf("%d ",sort[j]);
    }


}
