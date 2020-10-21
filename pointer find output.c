#include<stdio.h>
int main()
{
    char c='A';

    char *p,**q;

    p=&c;

    q=&p;

    c='B';

    printf("%c %c %c\n\n",c,*p,**q);


}
