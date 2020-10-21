#include<stdio.h>
#include<string.h>
int main()
{
   char str[1000000],k=1;
   long long n,i,res,j;
    while(scanf("%lld",&n)==1 && k<=100)
    {
        i=0,res=0;
        j=n;
        while(n>0)
        {
            res=n%3;
            str[i]=res+48;
            n=n/3;
            i++;
        }
        str[i]='\0';
       for(i=i-1; i>=0; i--)printf("%c",str[i]);

       if(j==0)printf("0");
       printf("\n");
       k++;
    }
    return 0;
}
