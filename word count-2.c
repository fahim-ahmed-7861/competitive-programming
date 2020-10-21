#include<stdio.h>
int main()
{
    int T,count,i,s;
    char str[1000];
    scanf("%d",&T);
    while(T--)
    {count=1;
        scanf(" %[^\n]",str);
        s=strlen(str)-1;

        for(i=0;i<strlen(str);i++)
        {
            if(str[i]==' '&& str[i-1]==';'||str[i-1]==
            '?' ||str[i-1]=='.'||str[i-1]==' '||str[i-1]
            ==',')continue;

                else if(str[i]==' ' || str[i]==','|| str[i]==';'||str[i]==
            '?' ||str[i]=='.'||str[i]==' !'||str[i]
            ==',')
            {
                count++;
            }
        }
         if(str[s]==' '|| str[s]=='?'||str[s]=='!'||str[s]
                    =='.'||str[s]==','||str[s]==';')
        {printf("Count = %d\n",count-1);}

        else{
            printf("Count = %d\n",count);
        }




    }
}
