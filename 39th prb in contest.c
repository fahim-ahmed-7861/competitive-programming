#include<stdio.h>
#include<string.h>
int main()
{
    int T,n,z;
    char one[1000],two[1000];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",one);
        strcpy(two,one);
        strrev(two);
        z=strcmp(one,two);

        if(z==0)
        {
            printf("Yes! It is palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not palindrome!\n");

        }

    }
    return 0;
}
