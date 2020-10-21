#include<stdio.h>
int main()
{
    int t,i=0;

    scanf("%d",&t);

    while(t--)
    {
        int y,l,sum;

        scanf("%d %d",&y,&l);

        i++;

        if(y<=l)
        {
        sum=(4*l)+19;

        if(y==0) printf("Case %d: %d\n",i,y);

        else printf("Case %d: %d\n",i,sum);
        }
        else{

        sum=(4*(y+(y-l)))+19;

        if(y==0) printf("Case %d: %d\n",i,y);

        else printf("Case %d: %d\n",i,sum);

        }

    }
    return 0;
}
