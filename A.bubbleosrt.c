#include<stdio.h>
void bubblesort(int a[],int n)
{
    int i,j,temp;
     for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

        }

    }
}
void input(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}
void print(int a[],int n)
{
    printf("\nOutput:\n");
    int i;
    for(i=0; i<n; i++)
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

    bubblesort(ara,n);

    print(ara,n);

    return 0;
}

