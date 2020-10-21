#include<stdio.h>
int main()
{
    int i,T;
    char str[100];
    scanf("%d",&T);

    while(T--)
    {
     scanf(" %[^\n]",str);

     for(i=0;i<=strlen(str);i++)
     {

        if(str[i]>='A' && str [i]<='Z')
        {
            printf("%d",str[i]-64);
        }
    }printf("\n");

    }

}
