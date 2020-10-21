#include<stdio.h>
int main()
{
    int i,T,count;

    char str[1000];
    scanf("%d",&T);

    while(T--)
    {
        count=0;
        scanf(" %[^\n]",str);

        for(i=0;i<strlen(str);i++)
        {
            if(str[i]==' ' && str[i-1]==' ')continue;
            else if(str[i]==' ') count++;

        }

        printf("Count = %d\n",count+1);

    }
    return 0;
}
