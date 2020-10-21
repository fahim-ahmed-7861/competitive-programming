#include<stdio.h>
int main()
{
    char small_letter,capital_letter ;

    printf("please enter a small letter: ");

    small_letter =getchar();

    //capital_letter =small_letter-32;

    printf("The capital letter is:%c\n",small_letter-32);

    return 0;

}
