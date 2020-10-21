#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    int t,n,i,count;

    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",str);

        n=strlen(str);

        count=0;

        if(n==3)
        {

                if(str[0]=='t')count++;
                if(str[1]=='w')count++;
                if(str[2]=='o')count++;

            if(count==2)
            {
                printf("2\n");

            }

            else printf("1\n");

        }
        else if(n==5)printf("3\n");
    }
    return 0;
}
