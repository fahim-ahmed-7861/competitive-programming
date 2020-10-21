#include<stdio.h>
#include<string.h>
int main()
{
    char str[10010];
    int n,t;
    double sum;
    scanf("%d",&t);

    while(t--)
    {
     scanf(" %[^\n]",str);

     n=strlen(str);

     sum=n/100.0;

     printf("%.2lf\n",sum);
    }

   return 0;
}
