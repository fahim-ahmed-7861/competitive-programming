#include<stdio.h>
int main()
{
    int x,y,z;

    scanf("%d %d %d",&x,&y,&z);

    if(x==y || y==z || z==x ||x+y==z || y+z==x || z+x==y)printf("S\n");

    else printf("N\n");
}
