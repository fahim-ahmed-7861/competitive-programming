/* Dynamic Programming C/C++ implementation of LIS problem */
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int lis[100],p=-1;

/* lis() returns the length of the longest increasing
  subsequence in arr[] of size n */
int LIS( int ara[], int n )
{
    int l[n+5], i, j, m = 0,k;

    int sub[n+2];
    //l = (int*) malloc ( sizeof( int ) * n );

    /* Initialize LIS values for all indexes */
    for (i = 0; i < n; i++ )
        {
            l[i] = 1;
            sub[i]=-1;
        }

    /* Compute optimized LIS values in bottom up manner */
    for (i = 1; i < n; i++ )
    {
        for (j = 0; j < i; j++ )
            {
                if ( ara[i] > ara[j] && l[i] <=l[j] + 1)
                {
                l[i] = l[j] + 1;

                sub[i]=j;
                }
            }
    }

    /* Pick maximum of all LIS values */
    for (i = 0; i < n; i++ )

       {

           if (m <= l[i])
          {
              m = l[i];

              k=i;
          }
       }

      /* printf("\nsubsequence\n");

       for (i = 0; i < n; i++ )

       {
           printf("%d ",sub[i]);

       }
       printf("\n\n");*/

   i=k;

   lis[++p]=ara[i];
    while(sub[i]!=-1)
    {
      lis[++p]=ara[sub[i]];

       i=sub[i];
    }
    //lis[p++]=ara[i];

    /* Free memory to avoid memory leak */
    free(l);
    free(sub);



    return m;
}

/* Driver program to test above function */
int main()
{
    int n,i;

    cin>>n;

    int ara[n+5];

    for(i=0; i<n; i++)cin>>ara[i];

    printf("\nmaximum LIS: %d ",LIS(ara,n));

    printf("\n\nLIS : ");


    for(i=p; i>=0; i--)printf("%d ",lis[i]);

    printf("\n\n");

    return 0;
}
