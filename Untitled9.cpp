#include<stdio.h>
long long swaps;
int ara[500000 + 100];
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

     for (  k = p; k <= r; k++ ) {
        if ( L[i] <= R[j] ) ara[k]=L[i++] ;
        else {
            ara[k]=R[j++];
            swaps += n1 - i;
        }
    }
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

    while ( scanf ("%d", &n) && n ) {
        swaps = 0;
        for (  i = 0; i < n; i++ ) scanf ("%d", &ara[i]);

        mergesort(ara,0, n - 1);

        printf("%d\n",swaps);
    }

    return 0;
}
