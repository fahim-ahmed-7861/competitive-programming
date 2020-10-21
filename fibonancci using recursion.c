#include<stdio.h>
int c=0;
int fibonacci(int n)
{
     c++;

    if(n==0 || n==1)
    {
        return n;
    }

    else return fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
    int n,i;

    printf("Input nth term fibonacci: ");
    scanf("%d",&n);

  //  fibonacci(n);

   // for(i=0;i<n;i++)
    {
   // printf("%d ",fibonacci(i));
    }
    printf("\nfunction call = %d",c);

    return 0;

}
