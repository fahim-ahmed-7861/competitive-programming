#include<stdio.h>
int main()
{
    struct student{

    int id;

    char* name;
    };

     struct student one;

     one.name="Fahim ahmed shojib";

     one.id=171;

     printf("ID : %d\n",one.id);

     printf("NAME : %s\n",one.name);

     return 0;
}
