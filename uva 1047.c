#include<stdio.h>
int main()
{
    int a,b,c,d,h,m;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a==c)
    {
        if( b<=d)
        {h=24;

        m=d-b;
        }

        else
        {
            h=23;
            m=d+60-b;
        }
    }
    else if(a>c)
    {
        h=24+c-a;
         if( b<=d)
        {

        m=d-b;
        }

        else
        {
            h--;
            m=d+60-b;
        }

    }
    else
    {
         h=c-a;
         if( b<=d)
        {

        m=d-b;
        }

        else
        {
            h--;
            m=d+60-b;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    return 0;
}
