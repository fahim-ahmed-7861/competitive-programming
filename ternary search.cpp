#include<bits/stdc++.h>
using namespace std;

int ternary_search(int ara[],int l,int r, int x)
{
    if(r>=l)
    {
        int mid1 = l + (r-l)/3;
        int mid2 = r -  (r-l)/3;

        //printf("L=%d  R=%d  MID1=%d MID2=%d\n",l,r,mid1,mid2);

        if(ara[mid1] == x)
            return mid1;
        if(ara[mid2] == x)
            return mid2;
        if(x<ara[mid1])
            return ternary_search(ara,l,mid1-1,x);
        else if(x>ara[mid2])
            return ternary_search(ara,mid2+1,r,x);
        else
            return ternary_search(ara,mid1+1,mid2-1,x);

    }
    return -1;
}
int main()
{
    int n,i,k;
        printf("\nEnter n:");
  scanf("%d",&n);

  int ara[n+5];
  printf("\nEnter num :");
  for(i=0;i<n;i++)
      scanf("%d",&ara[i]);

      sort(ara,ara+n);
  printf("Enter no to search:");
  scanf("%d",&k);
  int p=ternary_search(ara,0,n-1,k);

  if(p==-1)printf("NOT FOUND\n");

  else printf("Found at: %d\n",p);

}
