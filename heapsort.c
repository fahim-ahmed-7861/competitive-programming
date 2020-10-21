// C++ program for implementation of Heap Sort
#include<stdio.h>
// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
      //printArray(arr, n);
    int largest = i,temp;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {

       // swap(arr[i], arr[largest]);

        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    int i,temp;
    // Build heap (rearrange array)
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

        printArray();

    // One by one extract an element from heap
    for (i=n-1; i>=0; i--)
    {
        // Move current root to end
        //swap(arr[0], arr[i]);

        temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    int i;
    for (i=0; i<n; ++i)

        printf("%d ",arr[i]);
        printf("\n");
      //  cout << arr[i] << " ";
   // cout << "\n";
}

// Driver program
int main()
{
    int arr[100],n=12,i;

    //scanf("%d",&n);

    for(i=0; i<n; i++)scanf("%d",&arr[i]);
   // int n=7;


    heapSort(arr, n);

   printf("sorted:\n");
    printArray(arr, n);
    printf("\n%d\n",n);
}
