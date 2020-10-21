#include<stdio.h>
int isPrime(int n)
{
    int i;
    if(n<=1)return 0;

    for(i=2; i<n; i++)
        if(n%i==0)return 0;

    return 1;
}
int main()
{
    int n;

    scanf("%d",&n);

   if(!isPrime(n))printf("NOT PRIME\n");
   else printf("PRIME\n");
}
