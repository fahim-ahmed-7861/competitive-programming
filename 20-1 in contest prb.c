#include<stdio.h>
int main()
{
    char *word[1000];

    int count,T;

    scanf("%d",&T);

    while(T--)
    {
        scanf(" %[\n]",word);

        printf("%s",*word);
    }
}
