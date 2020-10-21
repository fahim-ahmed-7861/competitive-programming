#include<stdio.h>
char digit(char ch)
{

    if(ch>='0' && ch<='9') return 1;

    else return 0;
}
int main()
{
    char c=getchar();

    printf("Result is : %d\n",digit(c));

    return 0;


}

