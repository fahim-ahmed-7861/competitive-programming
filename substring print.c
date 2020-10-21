#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],str1[1000],str2[1000];
    int i,j,k,n,p,m;

    printf("Input main string:\n");
    scanf(" %[^\n]",str);
    printf("subtstring position of string:\n");
    scanf("%d",&n);

     printf("substring length of string:\n");
    scanf("%d",&m);


    k=strlen(str);

    for(i=n,p=0; i<n+m; p++,i++)str1[p]=str[i];
    str1[p]='\0';

     printf("%s",str1);

     return 0;

}
