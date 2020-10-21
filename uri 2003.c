#include<stdio.h>
int main()
{
    int i,n,sum;
    char str[10];

    while(scanf("%s",str)==1)
    {

    if(str[0]=='5' || str[0]=='6' || str[0]=='7' && str[2]
       =='0' && str[3]=='0')
    {
        printf("Atraso maximo: 0\n");
    }
    else{

        sum=str[0]-'7';
        sum*=60;
        sum+=((str[2]-'0')*10)+str[3]-'0';
        printf("Atraso maximo: %d\n",sum);
    }
    }
    return 0;

}
