#include<stdio.h>
int main()
{
    char ch;
    int T;
    scanf("%d",&T);

    while(T--)
    {
        scanf("%s", &ch);

        if(ch>='A' && ch<='Z')
        {
            printf("Uppercase Character");

        }

        else if(ch>='a' && ch<='z')
        {
            printf("Lowercase Character");

        }

        else if(ch>='0' && ch<='9')
        {
            printf("Numerical Digit");

        }

        else
        {
            printf("Special Character");

        }
        printf("\n");


    }
    return 0;
}
