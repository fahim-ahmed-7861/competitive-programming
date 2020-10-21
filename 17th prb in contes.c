#include<stdio.h>
int main()
{

    int count,T,i;

    char s[100];

    scanf("%d",&T);
    while(T--){

            count=0;


    scanf(" %[^\n]", s);

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
        {
            count++;
        }
    }
    printf("Number of vowels = %d\n",count);


    }
    return 0;
}
