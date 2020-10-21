#include<stdio.h>
int main()
{
    int a,b,sum=0,i;

    char ch;

    printf("first 2 int input then a char input(+,-,*,/,%): ");


    scanf("%d %d %c",&a,&b,&ch);


    switch(ch)
    {
    case '+':
        sum=a+b;
        printf("Result is: %d\n",sum);
        break;
    case'-':
        for(i=1;i<10;i++)
        sum=sum+i;
                printf("%d ",sum);
        break;
    case '*':
        sum=a*b;
        printf("Result is: %d\n",sum);
        break;
    case '/':
        sum=a/b;
        printf("Result is: %d\n",sum);
        break;
    case '%':
        sum=a%b;
        printf("Result is: %d\n",sum);
        break;
    default :

        printf("wrong input");
    }
    return 0;
}
