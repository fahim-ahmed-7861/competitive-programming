#include<stdio.h>
int main()
{
    int i,n,sum,p,h;
    char str[15];

    while(scanf("%d",&n)==1)
    {
        sum=0;
        if(n==0)return 0;

        while(n--)
        {
            scanf("%d",&p);
            scanf(" %[^\n]",str);
            h=strlen(str);
          //  printf("%d\n",h);

            if(h==15)sum+=120*p;

            else  if(strcmp("morango fresco",str)==0)sum+=85*p;

            else  if(strcmp("mamao",str)==0)sum+=85*p;

            else  if(strcmp("goiaba vermelha",str)==0)sum+=70*p;


             else  if(strcmp("laranja",str)==0)sum+=50*p;

            else  if(strcmp("manga",str)==0)sum+=56*p;

             else  if(strcmp("brocolis",str)==0)sum+=34*p;

        }
        printf("%d\n",sum);
    }
}
