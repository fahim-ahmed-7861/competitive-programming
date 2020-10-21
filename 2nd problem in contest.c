#include<stdio.h>
int main()
{

    int T,i;
    char n[101];
    scanf("%d",&T);

    while(T--)
    {
        scanf("%s",n);

        i=strlen(n);

        if(n[i-1]%2==0) printf("even\n");

        else printf("odd\n");
    }
    return 0;
}
