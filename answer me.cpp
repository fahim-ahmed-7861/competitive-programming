#include<stdio.h>
#include<math.h>

long long Answer_Me(int N,long long A[]) {
  long long c=0,i,j,product;
  double sum;
  for(i=0; i<N; i++) {
    for( j=i+1; j<N; j++) {
        product=A[i]*A[j];
        sum=sqrt(product);
      if(sum==floor(sum)) {
          c++;
       }
    }
 }

   return c;
}
int main()
{
    int t,n,i;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        long long ara[n+5];

        for(i=0; i<n; i++)scanf("%lld",&ara[i]);

       printf("%lld\n",Answer_Me(n,ara));
    }
    return 0;
}

