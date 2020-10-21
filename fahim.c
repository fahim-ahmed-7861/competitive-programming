#include<stdio.h>
void quicksort(int ara[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(ara,p,r);

        quicksort(ara,p,q-1);

        quicksort(ara,q+1,r);
    }
}
int partition(int ara[],int p,int r)
{
    int j,x=ara[r],i=p-1,temp;

    for(j=p; j<=r-1; j++)
    {
        if(ara[j]<=x)
        {
            i++;

            temp=ara[i];
            ara[i]=ara[j];
            ara[j]=temp;

        }
    }
    temp=ara[i+1];
    ara[i+1]=ara[r];
    ara[r]=temp;

    return i+1;
}
int main()
{
    int ara[ ]= {5,8,12,9,15,10};
    int i,j,p=0,n=6,r=n-1;

    quicksort(ara,p,r);

    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
}
