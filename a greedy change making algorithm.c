#include<stdio.h>
void insertion_sort(int a[],int n)
{
    int i,j,m,k;

    for(j=2; j<=n; j++)
    {
        i=1;
        while(a[j]<a[i])
        {
            i=i+1;
        }
        m=a[j];
        for(k=0; k<=j-i-1; k++)
        {
            a[j-k]=a[j-k-1];
        }
        a[i]=m;
    }
}
void input(int a[],int n)
{
    int i;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
}
void change(int c[],int r,int n)
{
    int i;
    for(i=1; i<=r; i++)
    {
        while(n>=c[i])
        {
            n=n-c[i];
            printf("%d ",c[i]);
        }
    }
}
int main()
{
    int r,n;

    printf("How many coin:\n");
    scanf("%d",&r);

    int ara[r+1];

    printf("Input all coins\n");

    input(ara,r);

    insertion_sort(ara,r);

    printf("Amount required:\n");

    scanf("%d",&n);

    printf("Ouptut: ");

    change(ara,r,n);

    printf("\n");
    return 0;
}
