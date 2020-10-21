#include<stdio.h>
#include<math.h>


int factorial(int n)
{
    int sum=1,i;

    for(i=2; i<=n; i++)
        sum*=i;

    return sum;
}
double seriessum(int x,int n)
{
      double sum=1;
      int i,j;


     for(i=1; i<=n; i++)
      {
          sum+=(pow(x,(i*2))/ factorial(i));

         // printf("%lf %d\n",pow(x,i),factorial(i));
      }

      return sum;


}


int main()
{
    int n,x;

    scanf("%d %d",&n,&x);

    printf("sum = %.3lf\n",seriessum(x,n));
}
