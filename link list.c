
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct item
{
    int info;
    char BG;
    struct item *link;
    };

struct item *start,*ptr;
int main()
{
    start=(struct item*)malloc(sizeof(struct item));
    ptr=start;
    int n,i;
    printf("number of item:");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&ptr->info);
        if(i==n-1)
        {
            ptr->link=0;
            break;
        }
        ptr->link=(struct item*)malloc(sizeof(struct item));
        ptr=ptr->link;
    }
    ptr=start;
    while(ptr!=0)
    {
        printf("item:%d\n",ptr->info);
        ptr=ptr->link;
    }
}
