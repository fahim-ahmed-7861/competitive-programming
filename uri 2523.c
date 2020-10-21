#include<stdio.h>
int main()
{
    char str[10000],str2[10000];
    int n,i,p;

    while(scanf("%s",str)==1)
    {
        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&p);

            str2[i]=str[p-1];
        }
        str2[i]='\0';
        printf("%s\n",str2);
    }

    return 0;
}
