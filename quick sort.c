#include<stdio.h>
int partition(int ara[],int p,int r)
{
    int  x=ara[r],j,temp;
    int i=p-1;


    for(j=p; j<=r-1; j++)
    {
        if(ara[j]>=x)
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

void quicksort(int ara[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(ara,p,r);
        //printf("%d\n",q);
        quicksort(ara,p,q-1);
        quicksort(ara,q+1,r);
    }

}
int main()
{
    int n;
    scanf("%d",&n);

    int ara[n],x,temp;
    int i,j,p=0,r=n-1,k;

    for(i=0; i<n; i++)scanf("%d",&ara[i]);

    quicksort(ara,p,r);



    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
}

