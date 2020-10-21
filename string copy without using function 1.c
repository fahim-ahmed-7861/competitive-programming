#include<stdio.h>
int main()
{
    int i,n;
    char str1[500],str2[500];
    scanf(" %[^\n]",str1);
    n=strlen(str1);


    for(i=0; str1[i]!='\0'; i++)
    {
        str2[i]=str1[i];
    }
   // str2[i]='\0';
    printf("%s",str2);


    return 0;
}


