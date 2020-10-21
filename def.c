#include<stdio.h>
char to_upper(char ch)
{
    return ch & 95;
}
char to_lower(char ch)
{
    return ch|32;
}
int main()
{
    char *str = "AbCdEfGhIjKlMnOpQrStUvWxYz";
    char str1={'a'};
    int i;

    for(i=0; i<26; i++)
    {
        printf("Uppercase : %c, ",to_upper(st1[i]));
        printf("lowercase : %c\n",to_lower(str[i]));
    }
    return 0;
}

