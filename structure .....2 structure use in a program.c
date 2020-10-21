#include<stdio.h>
int main()
{

    struct nametype
    {

        char first[20];
        char last[40];
    };

    struct student
    {
        char id[100];
        struct nametype name;

    };
    {
        struct student one;

        scanf("%s %s %s",one.id,one.name.first,one.name.last);

        printf("\nId:%s Name:%s %s\n",one.id,one.name.first,one.name.last);

    }
}
