#include<stdio.h>
void selectionsort(int ara[ ],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
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
int binarysearch(int ara[ ],int high)
{
    int low=0,mid,k=ara[high];
    high=high-1;
     while(low<=high)
    {
        mid=(low+high)/2;

        if(ara[mid]==k)
        {
            return 1;
            //break;
        }
        if(k>ara[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    if(low>high)return 0;
}
int main()
{
    int n,i,j=1,k;
    scanf("%d",&n);
    int ara[n],ara2[n];
    for(i=0; i<n; i++)scanf("%d",&ara[i]);

    selectionsort(ara,n);

    ara2[0]=ara[0];
    for(i=1; i<n; i++)
    {
        k=binarysearch(ara,i);
        if(k==0)
        {
            ara2[j]=ara[i];
            j++;
        }
    }



     for(i=0; i<j; i++)printf("%d ",ara2[i]);

     return 0;
}
