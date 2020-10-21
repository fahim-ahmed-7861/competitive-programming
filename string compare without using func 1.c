#include<stdio.h>
int main()
{
    int i,n=0,p=0;
    char str1[500],str2[500];
    scanf(" %[^\n] %[^\n]",str1,str2);



    for(i=0; str1[i]!=0; i++)
    {
        n+=str1[i];
    }

    for(i=0; str2[i]!='\0'; i++)
    {
        p+=str2[i];
    }



    if(n>p) printf("1");

    else if(n<p)printf("-1");

    else printf("0");



}


