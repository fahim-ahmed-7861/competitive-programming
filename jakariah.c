#include<stdio.h>
int main()
{
    int T,i,sum;
    scanf("%d",&T);
    char str[100];
    while(T--)
    {
        sum=0;
        for(i=0; i<3; i++)
        {
            scanf(" %c",&str[i]);

            sum+=str[i];
        }
        printf("%d\n",sum);
    }
}
