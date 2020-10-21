#include<stdio.h>
int main()
{
    int a,b,sum;
    char ch;
    scanf("%d %c %d",&a,&ch,&b);

    switch(ch)
    {
    case '+' :
        sum=a+b;
        printf("SUM : %d\n",sum);
        break;
    case '-' :
        sum=a-b;
        printf("SUM : %d\n",sum);
        break;
    case '*' :
        sum=a*b;
        printf("SUM : %d\n",sum);
        break;
    case '/' :
        sum=a/b;
        printf("SUM : %d\n",sum);
        break;
    case '%' :
        sum=a%b;
        printf("SUM : %d\n",sum);
        break;
    default :
        printf("Wrong input\n");
        break;
    }
    return 0;
}
