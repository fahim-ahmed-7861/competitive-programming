#include<stdio.h>
int main()
{
    int i=0,n,hexa[500];

    scanf("%d",&n);

     while(n>0)
     {
        hexa[i]=n%16;
        n/=16;
        i++;
     }
     for(i=i-1; i>=0; i--)
     {
         if(hexa[i]>=10) printf("%c",hexa[i]+55);

         else printf("%d",hexa[i]);

     }
     printf("\n");
     return 0;
}

