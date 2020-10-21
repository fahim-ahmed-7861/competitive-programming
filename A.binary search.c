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
int binary_2search(int a[],int n,int x)
{
    int i=0,j=n-1,location,m;

    while(i<j)
    {
        m=(i+j)/2;

        if(x>a[m])i=m+1;

        else j=m;
    }
    if(x==a[i])location=i;

    else location=-1;

    return location;
}
int main()
{
    int i,j,n,temp,k,key;

    printf("How many number input:\n");

    scanf("%d",&n);

    int ara[n];

    input(ara,n);

    bubblesort(ara,n);

    printf("Input a search number:\n");

    scanf("%d",&key);

    k=binary_2search(ara,n,key);


    if(k==-1)printf("Not found\n");

    else printf("Found at position :%d\n",k);


    return 0;
}

