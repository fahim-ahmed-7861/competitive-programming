#include<stdio.h>
int main()
{
    char a[10],b[10];

    scanf(" %[^\n] %[^\n]",a,b);
    if(strcmp(a,b)==0) printf("Both are equal\n");

    else printf("Not equal\n");
}
