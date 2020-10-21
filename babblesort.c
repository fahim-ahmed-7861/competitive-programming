
#include<stdio.h>
void babblesort(int ara[500],int n)
{
    int i,temp,j;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }

}
int main()
{
    int i,j,n,ara[500];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    babblesort(ara,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");

    return 0;

}
