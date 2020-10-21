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
    #include<stdio.h>
int main()
{
    int high,low=0,mid,n,k,i;
    printf("how many input: ");
    scanf("%d",&n);
    int ara[n];
    high=n-1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    selectionsort(ara,n);
    printf("search num: ");
    scanf("%d",&k);

    while(low<=high)
    {
        mid=(low+high)/2;

        if(ara[mid]==k)
        {
           // printf("%d at %dth position in the array\n",k,mid);

            break;
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
    if(low>high)printf("Not found\n");

    return 0;
}
