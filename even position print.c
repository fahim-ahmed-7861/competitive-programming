#include<stdio.h>
int main()
{
    int i,ara[2][2],j;

    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {scanf("%d",&ara[i][j]);}
    }
    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {printf("%d ",ara[i][j]);}
        printf("\n");
    }
}
