#include<stdio.h>
#include<string.h>
int main()
{



    char str[1000],ctr[1000];

    scanf(" %[^\n]",str);

    int k,i,n=strlen(str);
    char temp;

    for(i=0,k=n-1; i<n/2; i++,k--)
    {
       temp=str[i];
       str[i]=str[k];
       str[k]=temp;
    }


     printf("%s\n",str);

}
