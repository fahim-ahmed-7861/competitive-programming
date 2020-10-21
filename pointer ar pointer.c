#include<stdio.h>
int main()
{
    char c='A';
    char *p;

    p=&c;




    printf("Adress of c:%p\n",p);

    printf("Adress of p: %p\n",&p);


}
