#include<stdio.h>
#include<string.h>
int main()
{
   char str[101],t;
   long long n,i,res,j,length;
     for(t=1; t<=100; t++)
    {
        scanf("%lld",&n);
        if(n<0)break;
        i=0,length=1;
        while(i<100)
        {
            res=n%3;
            str[i]=res+48;
            n=n/3;
            if(n==0)break;
            else length++;
            i++;
        }
        str[length]='\0';
       for(j=length-1; j>=0; j--)printf("%c",str[j]);
       printf("\n");
    }
    return 0;
}
