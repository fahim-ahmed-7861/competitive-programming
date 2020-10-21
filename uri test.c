#include<stdio.h>
void heapify(long long ara[], int n, int i)
{
      //printArray(arr, n);
    int largest = i,temp;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2

    // If left child is larger than root
    if (l < n && ara[l] > ara[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && ara[r] > ara[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {

       // swap(arr[i], arr[largest]);

        temp=ara[i];
        ara[i]=ara[largest];
        ara[largest]=temp;

        // Recursively heapify the affected sub-tree
        heapify(ara, n, largest);
    }
}

// main function to do heap sort
void heapSort(long long ara[], int n)
{
    int i,temp;
    // Build heap (rearrange array)
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(ara, n, i);


    // One by one extract an element from heap
    for (i=n-1; i>=0; i--)
    {

        temp=ara[0];
        ara[0]=ara[i];
        ara[i]=temp;
        heapify(ara, i, 0);
    }
}

int main()
{
    int i,n,high,low=0,mid,k,p=0,q;

    while(scanf("%d %d",&n,&q)==2)
    {

     if(n==0 && q==0)return 0;

     long long ara[n];


    for(i=0; i<n; i++)scanf("%lld",&ara[i]);


    heapSort(ara, n);

     printf("CASE# %d:\n",++p);

   while(q--)
   {
       low=0;
         high=n-1;
    scanf("%d",&k);

    while(low<=high)
    {
        mid=(low+high)/2;

        if(ara[mid]==k)
        {
            printf("%d found at %d\n",k,mid+1);
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
    if(low>high)printf("%d not found\n",k);
    }
    }
    return 0;

}
