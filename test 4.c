#include<stdio.h>
#include <limits.h>
int swap;
void merge(int ara[],int p,int q,int r)
{
    int n1,n2,i,k,j;

    n1=q-p+1;
    n2=r-q;

    int L[n1+1];
    int R[n2+1];

    for(i=0; i<n1; i++)
    {
        L[i]=ara[p+i];
    }
    for(j=0; j<n2; j++)
    {
        R[j]=ara[q+j+1];
    }
    L[n1]=999999999+10;
    R[n2]=999999999+10;
    i=0;
    j=0;
    for(k=p; k<=r; k++)
    {
        if(L[i]<=R[j])
        {
            ara[k]=L[i];
            i++;
            swap+=j;
        }
        else
        {
            ara[k]=R[j];
            j++;
              //swap+=n1-i;
        }
    }
    printf("swap=%d n1=%d\n",swap,n1);
}
void mergesort(int ara[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        mergesort(ara,p,q);

        mergesort(ara,q+1,r);

        merge(ara,p,q,r);
    }
}
int main()
{
    int n,p,i,r;
    scanf("%d",&n);
    int ara[n+1];
    for(i=0; i<n; i++)scanf("%d",&ara[i]);
    r=n-1;
    p=0;

    mergesort(ara,p,r);



    printf("%d\n",swap);

    return 0;
}
