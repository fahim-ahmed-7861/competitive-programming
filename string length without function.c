#include<stdio.h>
int main()
{
    int i=0,j;
    char str[500];
    scanf(" %[^\n]",str);
    //puts(str);

    while(str[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
}
