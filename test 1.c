#include<stdio.h>

#include<string.h>

int main()
{
     char str[110],ptr[100];

     scanf("%s",str);

     strcpy(ptr,str);

     if(strcmp(strrev(str),ptr)==0)
     printf("Yes\n");

     else printf("No\n");

}
