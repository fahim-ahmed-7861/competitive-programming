#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int i,ara[500],max,m;


    for(i=0; i<3; i++)
    {
        scanf("%d",&ara[i]);
    }
    max=ara[0];
    for(i=1; i<3; i++)
    {
        if(ara[i]>max)max=ara[i];
    }
    m=max;
    max=ara[0];
     for(i=1; i<3; i++)
    {
        if(ara[i]>max)
        {
            if(ara[i]==m) continue;

            else max=ara[i];

        }


    }
    printf("%d\n",max);
    }

    return 0;

}
