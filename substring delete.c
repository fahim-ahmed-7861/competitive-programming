#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],str1[1000],str2[1000];
    int i,j,k,n,p,m;

    printf("Input main string:\n");
    scanf(" %[^\n]",str);
    printf("delete position of string:\n");
    scanf("%d",&n);

     printf("delete length of string:\n");
    scanf("%d",&m);


    k=strlen(str);

    for(i=0; i<n; i++)str1[i]=str[i];
    str1[n]='\0';
    j=i+m;

    for(i=j,p=0; i<k; i++,p++)str2[p]=str[i];
    str2[p]='\0';



    printf("%s\n",strcat(str1,str2));

    return 0;


}
