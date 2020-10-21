#include<stdio.h>
#include<limits.h>

static int A[1024], c;

void Merge(int front, int mid, int rear){
    int n1 = mid-front+1;
    int n2 = rear - mid;

    int *L[n1 + 1];
    int *R[n2 + 1];

    register unsigned i = 0;
    for(; i < n1; ++i)
        L[i] = A[front + i];

    register unsigned j = 0;
    for(; j < n2; ++j)
        R[j] = A[mid + 1 + j];

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    i = j = 0;

    /**
     * Might work without swaps by just incrementing index counters
     */
   int k = front;
    for(; k <= rear; ++k){
        if(L[i] <= R[j]){
            A[k] = L[i++];
            c += j;
        }
        else
            A[k] = R[j++];
    }
}

void Mergesort(int front, int rear){
    if(front < rear){
       int mid = (rear + front) >> 1;
       Mergesort(front, mid);
       Mergesort(mid + 1, rear);
       Merge(front, mid, rear);
    }
}

int main(){
     int i, j, n;
    int key;
    while(scanf("%d", &n) == 1){
        for(i = c = 0; i < n; ++i)
            scanf("%d", &A[i]);
        Mergesort(0, n - 1);

        printf("Minimum exchange operations : %d\n", c);
    }
    return 0;
}
