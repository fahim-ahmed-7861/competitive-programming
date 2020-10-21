#include<stdio.h>
int main()
{
    int x,y,c;


    while(scanf("%d %d",&x,&y)==2)
    {

    if(x==y)return 0;

    else if(x>y)printf("Decrescente\n");

    else printf("Crescente\n");


    }
    return 0;
}

