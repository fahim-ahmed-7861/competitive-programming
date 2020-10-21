#include<stdio.h>
int main()
{
    int i,n;
    char str1[500],str2[500],str3[1000];
    scanf(" %[^\n] %[^\n]",str1,str2);

    for(i=0; str1[i]!='\0'; i++)
    {
        str3[i]=str1[i];
    }//printf("%d\n",i);
    n=i;
    for(i=0; str2[i]!='\0'; i++)
    {
        str3[n]=str2[i];
        n++;
    }


    //printf("%d\n",i);
    str3[n]='\0';
    printf("%s",str3);

}
