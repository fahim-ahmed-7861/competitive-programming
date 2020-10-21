#include<stdio.h>
int main()
{
    int i,T,s,count;

    char str[1000];
    scanf("%d",&T);

    while(T--)
    {
        count=0;
        scanf(" %[^\n]",str);
        s=strlen(str);
        s=s-1;
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]==' ' && str[i-1]==' '||str[i-1]=='?'||str[i-1]=='!'||str[i-1]
                    =='.'||str[i-1]==','||str[i-1]==';')continue;
            else if(str[i]==' '|| str[i]=='?'||str[i]=='!'||str[i]
                    =='.'||str[i]==','||str[i]==';') count++;

        }
        if(str[s]==' '|| str[s]=='?'||str[s]=='!'||str[s]
                    =='.'||str[s]==','||str[s]==';')
        {printf("Count = %d\n",count);}

        else{
            printf("Count = %d\n",count+1);
        }
    }
    return 0;
}

//;'.,\'|"
