#include<stdio.h>
void insertion_sort(int a[],int n)
{
    int i,j,m,k;

    for(j=2; j<=n; j++)
    {
        i=1;
        while(a[j]>a[i])
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
void print(int a[],int n)
{
    printf("\nOutput:\n");
    int i;
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int i,j,n,temp;

    printf("How many number input:\n");

    scanf("%d",&n);

    int ara[n];

    input(ara,n);

    insertion_sort(ara,n);

    print(ara,n);

    return 0;
}

