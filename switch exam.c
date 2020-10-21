#include<stdio.h>
int main()
{

    char x;

    x=getchar();

    switch(x)
    {
        case 'a':printf("a");

        case 'b':printf("b");

        case 'c':printf("c");

        default: printf("no");

    }
    return 0;
}
