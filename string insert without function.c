#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],str1[1000],str2[1000],s[1000];
    int i,j,k,n,p;

    printf("Input main string:\n");
    scanf(" %[^\n]",str);
    printf("input position of substring:\n");
    scanf("%d",&n);
    printf("Input a sub string:\n");
    scanf(" %[^\n]",s);
    k=strlen(str);

    for(i=0; i<n; i++)str1[i]=str[i];
    str1[n]='\0';
    j=i;

    for(i=j,p=0; i<k; i++,p++)str2[p]=str[i];
    str2[p]='\0';

    //printf("%s\n",str2);



    printf("%s\n",strcat(strcat(str1,s),str2));


}
