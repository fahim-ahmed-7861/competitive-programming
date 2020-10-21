#include<stdio.h>

int min_location,max_location;

void minmax(int a[],int n)
{
    int i;

    max_location=1;

    min_location=1;

    for(i=2; i<=n; i++)
    {
        if(a[i]>a[max_location])

               max_location=i;

        if(a[i]<a[min_location])

            min_location=i;
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

int main()
{
    int i,j,n,temp;

    printf("How many number input:\n");

    scanf("%d",&n);

    printf("Input array value:\n");

    int ara[n+1];

    input(ara,n);

    minmax(ara,n);

    printf("\nOutput\n");

    printf("Minimum Position: %d\n",min_location);

    printf("Maximum Position: %d\n",max_location);

    return 0;
}


