#include<stdio.h>
#include<string.h>
int main()
{
    int a=1;

    char str[10];

    while(scanf(" %[^\n]",str)!=EOF)
    {
         if(strcmp(str,"Hajj")==0)printf("Case %d: Hajj-e-Akbar\n",a++);

         else if(strcmp(str,"Umrah")==0)printf("Case %d: Hajj-e-Asghar\n",a++);

         else if(strcmp(str,"*")==0)break;

    }
    return 0;
}
