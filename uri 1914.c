#include<stdio.h>
int main()
{
    int t,n,m;
    char str1[100],str2[100],str3[100],str4[100];
    scanf("%d",&t);

    while(t--)
    {

        scanf("%s %s %s %s",str1,str2,str3,str4);
        scanf("%d %d",&n,&m);

        n=n+m;

        if(n%2==0)
        {
            if(str2[0]=='P')printf("%s\n",str1);

            else printf("%s\n",str3);

        }
        else
        {


            if(str2[0]=='I')printf("%s\n",str1);

            else printf("%s\n",str3);

        }
    }

    return 0;
}
